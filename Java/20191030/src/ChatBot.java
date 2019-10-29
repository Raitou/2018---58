
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.Serializable;
import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.JTextField;
import java.awt.event.KeyListener;
import java.awt.event.KeyEvent;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author raito
 */
public class ChatBot extends JFrame implements Serializable {
    private static final JButton BUTTON_ASK = new JButton("ASK ME");
    private static final JTextField TEXTFIELD_QUESTION = new JTextField();    
    public HashMap<String, ArrayList<String>> questionsDB = new HashMap();
    public static ChatBot object = null;
    public ChatBot(){ }
    
    public void initializeGUI(){
        super.setTitle("ChatBot");
        
        this.initiateComponentsAndListeners();
        
        super.setLocationRelativeTo(null);
        super.setVisible(true);
        super.setResizable(false);
        super.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    
    }
    
    private void initiateComponentsAndListeners(){
        super.setLayout(new GridLayout(2,1));
        super.setSize(300, 100);
        super.add(TEXTFIELD_QUESTION);
        super.add(BUTTON_ASK);
        
        TEXTFIELD_QUESTION.addKeyListener(new KeyListener(){
            @Override
            public void keyTyped(KeyEvent e) { }

            @Override
            public void keyPressed(KeyEvent e) { 
                if(e.getKeyCode() == KeyEvent.VK_ENTER)
                    BUTTON_ASK.doClick();
            }

            @Override
            public void keyReleased(KeyEvent e) { }
        
        });
        
        BUTTON_ASK.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
            
            }
        
        });
    }
    
    public boolean loadFile(String filePath){
        try{
            File file = new File(filePath);
            if(file.exists()){
                try (FileInputStream ifStream = new FileInputStream(filePath); 
                        ObjectInputStream iobjStream = new ObjectInputStream(ifStream)) {
                    System.out.println("test");
                    if(!((object = (ChatBot)iobjStream.readObject()) == null)){
                        
                        System.out.println("Goin in here");
                        return true;
                    } else{
                        
                    }
                }
            } else {
                file.createNewFile();
            }
        }catch(IOException | ClassNotFoundException ex){
            return false;
        }
        return true;
    }
    
    public ChatBot chatBotRet(){
        return object;
    }
    
    public void deserialize(String filePath){
        File file = new File(filePath);
        try {
            try (FileOutputStream fileOut = new FileOutputStream(file); 
                    ObjectOutputStream out = new ObjectOutputStream(fileOut)) {
                out.writeObject(object);
            }
      } catch (IOException e) {
            System.out.println(e.getMessage());
      }
    }
    
    private String serialize(String message){
        return null;
    }
    
    public void add(String key, ArrayList<String> list){
        questionsDB.put(key, list);
    }
    
    
    public static void main(String...args){
        ChatBot c = new ChatBot();
        String fileName = "ChatBot.db";
        c.initializeGUI();
        ArrayList<String> list = new ArrayList();
        list.add("QWEQE");
        list.add("QWEQE");
        list.add("QWEQE");
        list.add("QWEQE");
        c.add("HELOLOLSOLO", list);
        c.deserialize(fileName);
        if(c.loadFile(fileName)){
            System.out.println("File Succesfully loaded!");
        } else {
            System.out.println("File is invalid or not found!");
        }
        if(c.chatBotRet() != null){
            System.out.println("Validated Object");
            c = c.chatBotRet();
        } else {
            System.out.println("Invalid Object");
        }
    }   
}