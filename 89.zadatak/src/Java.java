import javax.swing.*;

public class Java {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        JPanel panel = new JPanel();
        JCheckBox checkBox = new JCheckBox("checkbox",true);
        frame.setSize(300 , 300);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(panel);
        panel.add(checkBox);
    }
}
