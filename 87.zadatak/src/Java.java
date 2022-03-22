import javax.swing.*;
import java.awt.*;

public class Java {
    public static void main(String[] args) {
        JFrame frame = new JFrame("text area");
        JTextField textArea = new JTextField(20);
        JPanel panel = new JPanel();
        textArea.setEditable(true);
        frame.setSize(400 ,800);
        frame.setVisible(true);
        frame.setLayout(new FlowLayout());
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        panel.add(textArea);
        frame.add(panel);
    }
}
