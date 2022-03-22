import javax.swing.*;

public class Java {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        JPanel panel = new JPanel();
        JTextField textField = new JTextField(20);
        frame.setSize(500,800);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(panel);
        panel.add(textField);
        textField.setEditable(true);
    }
}
