import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Quantos nomes deseja inserir? ");
    int n = sc.nextInt();
    sc.nextLine();
    
    String[] name = new String[n];

    for(int i = 0; i < name.length; i++){
        System.out.println("Insira o nome " + (1+i));
        name[i] = sc.nextLine();
    }
    
    for(String a : name){
        System.out.println("Bem vindos " + a);
    }
    sc.close();
  }
}