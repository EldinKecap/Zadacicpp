import javax.swing.*;

public class Java {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        JPanel panel = new JPanel();
        JRadioButton radio = new JRadioButton();
        frame.setVisible(true);
        frame.setSize(300, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(panel);
        radio.setSelected(true);
        panel.add(radio);



    }
}
