import javax.swing.*;
import java.awt.*;

public class Java {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        JMenuBar menuBar = new JMenuBar();
        JMenu menu1 = new JMenu("prvi");
        JMenu menu2 = new JMenu("drugi");
        JMenu menu3 = new JMenu("treci");
        frame.setLayout(new FlowLayout());
        frame.add(menuBar);
        menuBar.add(menu1);
        menuBar.add(menu2);
        menuBar.add(menu3);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300,500);




    }
}
