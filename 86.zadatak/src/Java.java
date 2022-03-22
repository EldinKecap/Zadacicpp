import javax.swing.*;
import java.awt.*;

public class Java {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Menu with dropdown");
        JMenuBar menuBar = new JMenuBar();
        JMenu menu = new JMenu("FILE");
        JMenu menu1 = new JMenu("OPEN");
        JMenu menu2 = new JMenu("FIND");
        JMenuItem item1 = new JMenuItem("NEW");
        JMenuItem item2 = new JMenuItem("NEW");
        JMenuItem item3 = new JMenuItem("NEW");
        frame.setLayout(new FlowLayout());
        frame.setVisible(true);
        frame.setSize(600 ,800);
        frame.add(menuBar);
        menuBar.add(menu);
        menuBar.add(menu1);
        menuBar.add(menu2);
        menu.add(item1);
        menu1.add(item2);
        menu2.add(item3);
    }
}
