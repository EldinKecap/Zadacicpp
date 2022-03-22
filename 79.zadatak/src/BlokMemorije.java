public class BlokMemorije <T>{
    public BlokMemorije(T objekat) {
        this.objekat = objekat;
    }

    T objekat;

    public T getObjekat() {
        return objekat;
    }

    public void setObjekat(T objekat) {
        this.objekat = objekat;
    }
}
