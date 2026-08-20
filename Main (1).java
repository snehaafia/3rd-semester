import java.sql.*;

public class Main {
    public static void main(String[] args) {
        //create(1, "Ms. X", "123", "FEMALE");
        getAll();
        // getUser(1);
       // update("550", 1);
        delete(3);
    }

    private static void create(int id, String name, String password, String gender) {
        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection(
                    "jdbc:oracle:thin:@localhost:1521:xe", "scott", "tiger");
            PreparedStatement stmt = con.prepareStatement("insert into users (id, name, password, gender) values (?, ?, ?, ?)");
            stmt.setInt(1, id);
            stmt.setString(2, name);
            stmt.setString(3, password);
            stmt.setString(4, gender);
            stmt.execute();
            if (stmt.getUpdateCount() == 1) {
                System.out.println("Create Successful!!!");
                getAll();
            }
            con.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }

    private static void getAll() {
        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection(
                    "jdbc:oracle:thin:@localhost:1521:xe", "scott", "tiger");
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("select * from users");
            while (rs.next())
                System.out.println(rs.getInt(1) + "  " + rs.getString(2) + "  " + rs.getString(3)+" "+rs.getString(4));
            con.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }

    private static void getUser(int id) {
        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection(
                    "jdbc:oracle:thin:@localhost:1521:xe", "scott", "tiger");
            PreparedStatement stmt = con.prepareStatement("select id, name, password, gender from users where id = ?");
            stmt.setInt(1, id);
            ResultSet rs = stmt.executeQuery();
            while (rs.next())
                System.out.println(rs.getInt(1) + "  " + rs.getString(2) + "  " + rs.getString(3) + "  " + rs.getString(4));
            con.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }

    private static void update(String name, int id) {
        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection(
                    "jdbc:oracle:thin:@localhost:1521:xe", "scott", "tiger");
            PreparedStatement stmt = con.prepareStatement("update users set password = ? where id = ?");
            stmt.setString(1, password);
            stmt.setInt(2, id);
            stmt.execute();
            if (stmt.getUpdateCount() == 1) {
                System.out.println("Update Successful!!!");
                getUser(id);
            }
            con.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }

    private static void delete(int id) {
        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection(
                    "jdbc:oracle:thin:@localhost:1521:xe", "scott", "tiger");
            PreparedStatement stmt = con.prepareStatement("delete from users where id = ?");
            stmt.setInt(1, id);
            stmt.execute();
            if (stmt.getUpdateCount() == 1) {
                System.out.println("Delete Successful!!!");
                getAll();
            }
            con.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}  