/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arduinomotores;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author HP PAVILION
 */
public class ArduinoMotores {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        String arreglo[]={"1","2","3","4","5"};
        
        for(int a=0; a<arreglo.length; a++){
            System.out.println(arreglo[a]);
            try {
                Thread.sleep(10000);
            } catch (InterruptedException ex) {
                Logger.getLogger(Motores.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
    
}
