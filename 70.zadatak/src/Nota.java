import java.util.regex.Pattern;

public class Nota {
    String nota  ;

    public String getNota() {
        return nota;
    }

    Nota ( String nota ){
        if(nota == "C#"){
            this.nota = nota;
        }else if(Pattern.matches("[CDEFGAH]", nota)){
          this.nota = nota;
        } else {
            this.nota = "C";
        }
    }
}
