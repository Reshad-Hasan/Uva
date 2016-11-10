 #include<iostream>
 #include<cstdio>
 using namespace std;

 main()
 {
     int th,tl,c;
     string g,tooh,tool;
     tooh="too high";
     tool="too low";
     th=100,tl=0;
     while(1)
     {
         cin>>c;
         getchar();
         if(!c)
            break;
         getline(cin,g);
         if(g==tooh)
         {
             if(th>c)
                th=c;
         }
         else if(g==tool)
         {
             if(tl<c)
                tl=c;
         }
         else
         {
             if(c>tl && c<th)
                cout<<"Stan may be honest"<<endl;
             else
                cout<<"Stan is dishonest"<<endl;
            th=100,tl=0;
         }
     }
     return 0;
 }
