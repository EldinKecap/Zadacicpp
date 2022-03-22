public class Ucenik extends Osoba {
    int brPred;
    int brCaso;

    Ucenik() {
        this.godiste = 10;
        this.ime = "stef";
        this.prezime = "pef";
        this.brCaso = 12;
        this.brPred = 3;
    }

    public int getBrPred() {
        return brPred;
    }

    public void setBrPred(int brPred) {
        this.brPred = brPred;
    }

    public int getBrCaso() {
        return brCaso;
    }

    public void setBrCaso(int brCaso) {
        this.brCaso = brCaso;
    }

    public static void main(String[] args) {
        Ucenik u = new Ucenik();
        System.out.print(u.getBrPred());
        System.out.print(u.getBrCaso());
        System.out.print(u.getIme());
        System.out.print(u.getPrezime());
        System.out.print(u.getGodiste());

    }
}

