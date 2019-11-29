
import lrapi.lr;
import java.sql.*;

public class Actions
{
	private Connection connection;

	public int init() throws ClassNotFoundException, SQLException {
		return 0;
	}


	 public int action() throws ClassNotFoundException, SQLException {

	try {
		    String url = "jdbc:oracle:thin:@192.168.14.53:1522:orcl";
		    connection = DriverManager.getConnection(url,"c##x5",lr.decrypt("c##x5"));
		    lr.log_message("JDBC Connection Successful");
        } catch (SQLException e) {
		    lr.log_message("Database Connection Failed, Please check your connection string");
		    lr.abort();
		}
			String insert = "INSERT INTO task" + 
		             "(ID," +
		             "STATE_ID," + 
		             "CHANGE_ID, " +
		             "TICKET_ID," +
		             "CLIENT_ID, " +
		             "SOLUTION_USER_ID," +
		             "SOLUTION_GROUP_ID, " +
		             "PRIORITY_ID, GUID," + 
		             "HEADER, TEXT," +
		             "CREATE_DATE," +
		             "LAST_EDIT_DATE," +
		             "SLA_DATE, " +
		             "SYNC_MASK," +
		             "ENGINEER_ID, " +
		             "CONTRACTOR_ID," +
		             "STATE_REASON_ID," +
		             "LAST_EDIT_USER_LOGIN," +
		             "LAST_ASKO_MESSAGE_ID, " +
		             "LAST_ASKO_MESSAGE_DATE," +
		             "EXTERNAL_ID," +
		             "EXTERNAL_SYSTEM)" +
				"SELECT " +
					  "ID, " +
					  "'1', " +
					  "'IDC2D620524153zdzPWAoX9OFgW4UB', " +
					  "ID," +
					  "APPLICANT_ID," +
					  "SOLUTION_USER_ID," +
					  "'9'," +
					  "'3', " +
					  "'d830c5ee-9b77-4bd1-879a-0c4d2c282a67'," + 
					  "HEADER, " +
					  "TEXT," +
					  "CREATE_DATE," +
					  "LAST_EDIT_DATE," +
					  "SLA_DATE," +
					  "SYNC_MASK," +
					  "'103'," +
					  "'102'," +
					  "STATE_REASON_ID," +
					  "LAST_EDIT_USER_LOGIN," +
					  "LAST_ASKO_MESSAGE_ID," +
					  "LAST_ASKO_MESSAGE_DATE," +
					  "'TSK_1800000'," +
					  "EXTERNAL_SYSTEM " +
					  "FROM ticket " +
					  "WHERE state_id = -1" +
				 "AND text Like 'IOS%'";
		String update = "update ticket set state_id = 1";
	
	    Statement stmt = null;

    try {
	   connection.setAutoCommit(false);
	   stmt = connection.createStatement();
	   stmt.executeUpdate(insert);
	   stmt.executeUpdate(update);
	   lr.set_transaction_status(lr.PASS);
	   connection.commit();	   
	} catch (SQLException e) {
	    lr.log_message("Caught Exception: " + e.getMessage());
	    lr.set_transaction_status(lr.FAIL);
	    connection.rollback();
	    return 1;
	}
	return 0;
	}


	public int end() throws Throwable {
		return 0;
	}
}
