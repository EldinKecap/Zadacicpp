public class Proizvod {
    static int brojac = 0;
    int ID;
    int getID(){
        return ID;
    }
    Proizvod(){
        ++brojac;
        ID = brojac;

    }
}
