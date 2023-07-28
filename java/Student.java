package Student;
class Student{
    String name;
    int marks;
    Student(String stuName){
        name = stuName;
    }
    Student(String stuName, int stuMarks){
        name = stuName;
        marks = stuMarks;
    }

    public void setMarks(int stuMarks) {
        marks = stuMarks;
    }
    
    public void printStudent() {
        System.out.println("Name  : " + name);
        System.out.println("Marks : " + marks);
    }

    public static void main(String[] args) {
        Student student1 = new Student("Vivek");
        Student student2 = new Student("Aakash");
        Student student3 = new Student("Pkay",100); 

        student1.setMarks(98);
        student2.setMarks(85);
        //student3.setMarks(91);

        student1.printStudent();
        student2.printStudent();
        student3.printStudent();
    }
}
