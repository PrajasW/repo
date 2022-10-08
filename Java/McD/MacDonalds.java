/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



/**
 * @author Prajas Wadekar
 */
import java.util.Scanner;

public class MacDonalds {
//    Global variable for price of item
    double Price=1;
//    Global variable to calculate Total
    double Total=0;
    boolean status=true;
    boolean condition=true;
//    To use in Bill to display purcesed items and their Quantity
    String Item="";
//    methords for diffrent Items
    void Mc_Aloo_Tikki(int Quantity)
    {
        Price=45;
        Total=Total+Price*Quantity;
    }
    void Mexican_Aloo_Tikki(int Quantity)
    {
        Price=51;
        Total=Total+Price*Quantity;
    }
    void Mexican_Aloo_Wrap(int Quantity)
    {
        Price=67;
        Total=Total+Price*Quantity;
    }
    void Chicken_Kebab_Wrap(int Quantity)
    {
        Price=78;
        Total=Total+Price*Quantity;
    }
    void Chicken_Kebab_Burgur(int Quantity)
    {
        Price=78;
        Total=Total+Price*Quantity;
    }
    void Mc_Veggi_Burgur(int Quantity)
    {
        Price=100;
        Total=Total+Price*Quantity;
    }   
    void Mc_Chicken_Burgur(int Quantity)
    {
        Price=114;
        Total=Total+Price*Quantity;
    }
    void American_Cheese_Supreme(int Quantity)
    {
        Price=114;
        Total=Total+Price*Quantity;
    }
    void American_Chicken_Supreme(int Quantity)
    {
        Price=130;
        Total=Total+Price*Quantity;
    }
    void Salad_Wrap(int Quantity)
    {
        Price=123;
        Total=Total+Price*Quantity;
    }
    void Salasa_Bean_Burgur(int Quantity)
    {
        Price=124;
        Total=Total+Price*Quantity;
    }
    void Salsa_Chicken_Burgur(int Quantity)
    {
        Price=130;
        Total=Total+Price*Quantity;
    }
    void Fillet_O_Fish(int Quantity)
    {
        Price=140;
        Total=Total+Price*Quantity;
    }
    void Mc_Spicy_Panner_Burgur(int Quantity)
    {
        Price=153;
        Total=Total+Price*Quantity;
    }
    void Mc_Spicy_Chicken_Burgur(int Quantity)
    {
        Price=158;
        Total=Total+Price*Quantity;
    }
    void Big_Panner_Wrap(int Quantity)
    {
        Price=187;
        Total=Total+Price*Quantity;
    }    
    void Big_Chicken_Wrap(int Quantity)
    {
        Price=187;
        Total=Total+Price*Quantity;
    }    
    void Veg_Maharaja_Mac(int Quantity)
    {
        Price=187;
        Total=Total+Price*Quantity;
    }    
    void Chicken_Maharaja_Mac(int Quantity)
    {
        Price=197;
        Total=Total+Price*Quantity;
    }   
//List of prices and Name of Product to use Print Bill
    void List_Veg_Burger(int n)
    {
        Scanner sc=new Scanner(System.in);
        int Quantity;
        switch(n)
                {
                    case 0:
                        break;
                    case 1:
                        System.out.println("Enter Quantity of Mc Aloo Tikki:");
                        Quantity=sc.nextInt();
                        Mc_Aloo_Tikki(Quantity);
                        Item=Item+"\nMc Aloo Tikki\t"+Quantity;
                        break;
                    case 2:
                        System.out.println("Enter Quantity of Mexican Aloo Tikki:");
                        Quantity=sc.nextInt();
                        Mexican_Aloo_Tikki(Quantity);
                        Item=Item+"\nMexican Aloo Tikki\t"+Quantity;
                        break;
                    case 3:
                        System.out.println("Enter Quantity of Mc Veggi:");
                        Quantity=sc.nextInt();
                        Mc_Veggi_Burgur(Quantity);
                        Item=Item+"\nMcVeggie\t"+Quantity;
                        break;
                    case 4:
                        System.out.println("Enter Quantity of American Cheese Supreme:");
                        Quantity=sc.nextInt();
                        American_Cheese_Supreme(Quantity);
                        Item=Item+"\nAmerican Cheese Supreme\t"+Quantity;
                        break;
                    case 5:
                        System.out.println("Enter Quantity of Salsa Bean Burger:");
                        Quantity=sc.nextInt();
                        Salasa_Bean_Burgur(Quantity);
                        Item=Item+"\nAmerican Cheese Supreme\t"+Quantity;
                        break;
                    case 6:
                        System.out.println("Enter Quantity of McSpicy Paneer Burger:");
                        Quantity=sc.nextInt();
                        Mc_Spicy_Panner_Burgur(Quantity);
                        Item=Item+"\nMcSpicy Paneer Burger\t"+Quantity;
                        break;
                    case 7:
                        System.out.println("Enter Quantity of Veg Maharaja Mac:");
                        Quantity=sc.nextInt();
                        Veg_Maharaja_Mac(Quantity);
                        Item=Item+"\nVeg Maharaja Mac\t"+Quantity;
                        break;
                    default:
                        System.out.println("Please Enter a valid input");
                        break;
                }
            }
    void List_NonVeg_Burger(int n)
    {
        Scanner sc=new Scanner(System.in);
        int Quantity;
        switch(n)
                {
                    case 0:
                        break;
                    case 1:
                        System.out.println("Enter Quantity of Chicken Kebab burgur:");
                        Quantity=sc.nextInt();
                        Chicken_Kebab_Burgur(Quantity);
                        Item=Item+"\nChicken Kebab burgur\t"+Quantity;
                        break;
                    case 2:
                        System.out.println("Enter Quantity of Mc Chicken :");
                        Quantity=sc.nextInt();
                        Mc_Chicken_Burgur(Quantity);
                        Item=Item+"\nMc Chicken\t"+Quantity;
                        break;
                    case 3:
                        System.out.println("Enter Quantity of American Chicken Supreme:");
                        Quantity=sc.nextInt();
                        American_Chicken_Supreme(Quantity);
                        Item=Item+"\nAmerican Chicken Supreme\t"+Quantity;
                        break;
                    case 4:
                        System.out.println("Enter Quantity of Salsa Chicken Burger:");
                        Quantity=sc.nextInt();
                        Salsa_Chicken_Burgur(Quantity);
                        Item=Item+"\nSalsa Chicken Burger\t"+Quantity;
                        break;
                    case 5:
                        System.out.println("Enter Quantity of Fillet-O-Fish:");
                        Quantity=sc.nextInt();
                        Fillet_O_Fish(Quantity);
                        Item=Item+"\nFillet-O-Fish\t"+Quantity;
                        break;
                    case 6:
                        System.out.println("Enter Quantity of McSpicy Chicken Burger:");
                        Quantity=sc.nextInt();
                        Mc_Spicy_Chicken_Burgur(Quantity);
                        Item=Item+"\nMcSpicy Chicken Burger\t"+Quantity;
                        break;
                    case 7:
                        System.out.println("Enter Quantity of Chicken Maharaja Mac:");
                        Quantity=sc.nextInt();
                        Chicken_Maharaja_Mac(Quantity);
                        Item=Item+"\nChicken Maharaja Mac\t"+Quantity;
                        break;
                    default:
                        System.out.println("Please Enter a valid input");
                        break;
                }
    }
    void List_Veg_Wraps(int n)
    {
        Scanner sc=new Scanner(System.in);
        int Quantity;
        switch(n)
                {
                    case 0:
                        break;
                    case 1:
                        System.out.println("Enter Quantity of Mexican Aloo Wrap:");
                        Quantity=sc.nextInt();
                        Mexican_Aloo_Wrap(Quantity);
                        Item=Item+"\nMexican Aloo Wrap\t"+Quantity;
                        break;
                    case 2:
                        System.out.println("Enter Quantity of Salad Wrap :");
                        Quantity=sc.nextInt();
                        Salad_Wrap(Quantity);
                        Item=Item+"\nSalad Wrap\t"+Quantity;
                        break;
                    case 3:
                        System.out.println("Enter Quantity of Big Panner Wrap:");
                        Quantity=sc.nextInt();
                        Big_Panner_Wrap(Quantity);
                        Item=Item+"\nBig Panner Wrap\t"+Quantity;
                        break;
                    default:
                        System.out.println("Please Enter a valid input");
                        break;
                }
    }
    void List_NonVeg_Wraps(int n)
    {
        Scanner sc=new Scanner(System.in);
        int Quantity;
        switch(n)
                {
                    case 0:
                        break;
                    case 1:
                        System.out.println("Enter Quantity of Chicken kebab Wrap:");
                        Quantity=sc.nextInt();
                        Chicken_Kebab_Wrap(Quantity);
                        Item=Item+"\nChicken kebab Wrap\t"+Quantity;
                        break;
                    case 2:
                        System.out.println("Enter Quantity of Big Chicken Wrap :");
                        Quantity=sc.nextInt();
                        Big_Chicken_Wrap(Quantity);
                        Item=Item+"\nBig Chicken Wrap\t"+Quantity;
                        break;
                    default:
                        System.out.println("Please Enter a valid input");
                        break;
                }
    }
//  To Display the Menu
    void Menu_Veg_Burgur()
    {   
        System.out.println("\n***Menu***");
        System.out.println("Sr.No.\tName\t\t\t\tPrice");
        System.out.println("1\tMcAloo Tikki Burger\t\t45");
        System.out.println("2\tMexican McAloo Tikki\t\t51");
        System.out.println("3\tMcVeggie\t\t\t100");
        System.out.println("4\tAmerican Cheese Supreme\t\t114");
        System.out.println("5\tSalsa Bean Burger\t\t124");
        System.out.println("6\tMcSpicy Paneer Burger\t\t153");
        System.out.println("7\tVeg Maharaja Mac\t\t197");
        Ask_Veg_Burgur();
    }
    void Menu_NonVeg_Burgur()
    {
        System.out.println("\n***Menu***");
        System.out.println("Sr.no.\tName\t\t\tPrice");
        System.out.println("1\tChicken Kebab burgur\t78");
        System.out.println("2\tMc Chicken\t\t114");
        System.out.println("3\tAmerican Cheese Burgur\t130");
        System.out.println("4\tSalsa Chicken Burger\t130");
        System.out.println("5\tFillet-O-Fish\t\t140");
        System.out.println("6\tMcSpicy Chicken\t\t158");
        System.out.println("7\tChicken Maharaja Mac\t187");
        Ask_NonVeg_Burgur();
    }
    void Menu_Veg_Wraps()
    {
        System.out.println("\n***Menu***");
        System.out.println("Sr.no.\tName\t\t\tPrice");
        System.out.println("1\tMexican Aloo Wrap\t67");
        System.out.println("2\tSalad Wrap\t\t123");
        System.out.println("3\tBig Panner Wrap\t\t187");
        Ask_Veg_Wrap();
    }
    void Menu_NonVeg_Wraps()
    {
        System.out.println("\n***Menu***");
        System.out.println("Sr.no.\tName\t\t\tPrice");
        System.out.println("1\tChicken Kebab Wrap\t78");
        System.out.println("2\tBig Chicken Wrap\t187");
        Ask_NonVeg_Wraps();
    }
    
    void Ask_Veg_Burgur()
    {   
            Scanner sc=new Scanner(System.in);
            System.out.println("Please Enter Sr.No. Of Item Of Your Choise(Enter 0 if none)");
            int temp=sc.nextInt(); 
            List_Veg_Burger(temp);
            if(condition==true)
            {
                System.out.println("Continue Shopping??(Yes/No)");
                String str=sc.next();  
                char ch=str.charAt(0);
                switch(ch)
                {
                    case 'y':
                    case 'Y':
                    option1();
                    condition=true;
                    break;
                    case 'n':
                    case 'N':
                    condition=false;
                    Bill();
                    break;
            }
        }
        if(condition==false &&  Item!="")
        {
            System.out.println("Machine Status??(On/Off)");
            String des=sc.next(); 
            char ch1=des.charAt(1);
            switch(ch1)
            {
                case 'n':
                case 'N':
                status=true;
                break;
                case 'f':
                case 'F':
                status=false;
                break;
                default:
                status=false;
                break;
            }
        }
    }
    void Ask_NonVeg_Burgur()
    {   
            Scanner sc=new Scanner(System.in);
            System.out.println("Please Enter Sr.No. Of Item Of Your Choise(Enter 0 if none)");
            int temp=sc.nextInt();  
            List_NonVeg_Burger(temp);
            if(condition==true)
            {
                System.out.println("Continue Shopping??(Yes/No)");
                String str=sc.next();  
                char ch=str.charAt(0);
                switch(ch)
                {
                    case 'y':
                    case 'Y':
                    option1();
                    condition=true;
                    break;
                    case 'n':
                    case 'N':
                    condition=false;
                    Bill();
                    break;
                    default:
                    status=false;
                    break;
                }
        }
        if(condition==false &&  Item!="")
        {
            System.out.println("Machine Status??(On/Off)");
            String des=sc.next(); 
            char ch1=des.charAt(1);
            switch(ch1)
            {
                case 'n':
                case 'N':
                status=true;
                break;
                case 'f':
                case 'F':
                status=false;
                break;
                default:
                status=false;
                break;
            }
        }
    }
    void Ask_Veg_Wrap()
    {   
            Scanner sc=new Scanner(System.in);
            System.out.println("Please Enter Sr.No. Of Item Of Your Choise(Enter 0 if none)");
            int temp=sc.nextInt();  
            List_Veg_Wraps(temp);
            if(condition==true)
            {
                System.out.println("Continue Shopping??(Yes/No)");
                String str=sc.next();  
                char ch=str.charAt(0);
                switch(ch)
                {
                    case 'y':
                    case 'Y':
                    option1();
                    condition=true;
                    break;
                    case 'n':
                    case 'N':
                    condition=false;
                    Bill();
                    break;
            }
        }
        if(condition==false &&  Item!="")
        {
            System.out.println("Machine Status??(On/Off)");
            String des=sc.next(); 
            char ch1=des.charAt(1);
            switch(ch1)
            {
                case 'n':
                case 'N':
                status=true;
                break;
                case 'f':
                case 'F':
                status=false;
                break;
                default:
                status=false;
                break;
            }
        }
    }
    void Ask_NonVeg_Wraps()
    {   
            Scanner sc=new Scanner(System.in);
            System.out.println("Please Enter Sr.No. Of Item Of Your Choise(Enter 0 if none)");
            int temp=sc.nextInt();  
            List_NonVeg_Wraps(temp);
            if(condition==true)
            {
                System.out.println("Continue Shopping??(Yes/No)");
                String str=sc.next();  
                char ch=str.charAt(0);
                switch(ch)
                {
                    case 'y':
                    case 'Y':
                    option1();
                    condition=true;
                    break;
                    case 'n':
                    case 'N':
                    condition=false;
                    Bill();
                    break;
            }
        }
        if(condition==false)
        {
            System.out.println("Machine Status??(On/Off)");
            String des=sc.next(); 
            char ch1=des.charAt(1);
            switch(ch1)
            {
                case 'n':
                case 'N':
                status=true;
                break;
                case 'f':
                case 'F':
                status=false;
                break;
                default:
                status=false;
                break;
            }
        }
    }
//  To Give Ask choise of Burgur or Warps
    void option1()
    {   
        Scanner sc=new Scanner(System.in);
        System.out.println("\nWhat would you like to have??");
        System.out.println("Enter \'1\' for Burgurs");
        System.out.println("Enter \'2\' for Wraps");
        char ch = sc.next().charAt(0);
        option2(ch);
    }
    
    void option2(char ch)
    {
        Scanner sc=new Scanner(System.in);
        switch(ch)
        {
                case '1':
                System.out.println("Enter Your Choise(Veg/Non-Veg)");
                String str1=sc.nextLine();
                char ch1=str1.charAt(0);
                if(ch1=='V'||ch1=='v')
                {
                    Menu_Veg_Burgur();
                }
                if(ch1=='N'||ch1=='n')
                {
                    Menu_NonVeg_Burgur();
                }
                break;
                
                case '2':
                System.out.println("Enter Your Choise(Veg/Non-Veg)");
                String str2=sc.nextLine();
                char ch2=str2.charAt(0);
                if(ch2=='V'||ch2=='v')
                {
                    Menu_Veg_Wraps();
                }
                if(ch2=='N'||ch2=='n')
                {
                    Menu_NonVeg_Wraps();
                }
                break;
                
                default:
                System.out.println("Please Enter Valid Input.");

                break;
        }
    }
//    To print Bill
    void Bill()
    {
        System.out.println("***Bill***");
        System.out.println("\nItem\t\tQuantity"+Item);
        System.out.println("Total=\t"+Total);
        System.out.println("\n**Thank you for Shopping With us**");
    }
//    Main Class
    public static void main(String[]Args)
    {
        MacDonalds obj=new MacDonalds();
        while(obj.status==true)
        {
            System.out.println("!!!Welcome To MacDonalds!!!");
            obj.condition=true;
            obj.Item="";
            obj.Total=0;
            while (obj.condition==true)
            {
                obj.option1();
            }
        }
    } 
}
