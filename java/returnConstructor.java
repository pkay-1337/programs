package inherit;
// when we return with constructor, it becomes normal meathod
class test{
    int test(){
        System.out.println("not a constructor");
        return 5;
    }
    public static void main(String[] args) {
        test t = new test();
        t.test();
    }
}
