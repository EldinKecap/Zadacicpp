import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Java implements ActionListener {
    public static JLabel text;
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        JPanel panel = new JPanel();
        JButton button = new JButton("click me");
        frame.setVisible(true);
        frame.setSize(300,600);
        frame.add(panel);
        panel.add(button);
        button.addActionListener(new Java());
        text = new JLabel();
        panel.add(text);


    }
    @Override
    public void actionPerformed(ActionEvent e){
        System.out.println("Klik");
        text.setText("Klik");
    }
}
