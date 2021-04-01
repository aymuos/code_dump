import java.awt.print.Book;

class library{
    public class Library{
        //attributes
        String libraryName;
        String address;
        Book[] listOfBooks;
        Library(String a,String b,Book[] c){
            this.libraryName=a;
            this.address=b;
            this.listOfBooks=listOfBooks;
        }

        public Book getCostliestBook(){
            Book costliestBook=listOfBooks[0];
            for(int i=0;i<listOfBooks.length;i++){
                if(listofBooks[i].price>costliestBook.price){
                    costliestBook=listOfBooks[i];
                }
                
            }
            return costliestBook;
        }

        
    }
}