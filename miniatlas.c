#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
 int gd=DETECT,gm;
 int c,i;
 clrscr();
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 printf("\t\t\tMINI ATLAS\n");
 printf("\n\nCHOOSE A COUNTRY\n");
 printf(" 1.India\n 2.France\n 3.Japan\n 4.Brazil\n 5.Israel\n 6.Germany\n 7.England\n 8.The U.S.A\n 9.Jordan\n 10.South Africa\n 11.UK\n 12.Greenland\n 13.Macedonia\n 14.Argentina\n\n 15.Exit\n");
 scanf("%d",&c);


  switch (c)
  {
  case 1:   //India
  cleardevice();
  outtextxy(430,85,"National Flag:-");
  rectangle(400,100,600,220); // flag



 line(400,140,600,140);
 line(400,180,600,180);

 setfillstyle(SOLID_FILL,06); //orange
  floodfill(402,102,WHITE);
 setfillstyle(SOLID_FILL,WHITE);   //white
  floodfill(402,143,WHITE);
  floodfill(588,143,WHITE);
 setfillstyle(SOLID_FILL,GREEN);   //green
  floodfill(402,183,WHITE);

 setcolor(1);
 circle(500,160,20);    //Chakra  circle
 line(480,160,520,160);
 line(500,140,500,180);
    //24 lines
 line(500,160,514,145); //top ryt
     line(500,160,507,143);
     line(500,160,517,152);
 line(500,160,514,175); //bottom ryt
      line(500,160,507,177);
      line(500,160,517,168);
 line(500,160,486,145); //top left
      line(500,160,493,143);
      line(500,160,481,152);
 line(500,160,486,175); //bottom ryt
      line(500,160,493,177);
      line(500,160,481,168);


    outtextxy(100,100,"COUNTRY : INDIA");
    printf("\n\nCAPITAL:NEW DELHI\nLOCATED IN ASIA CONTINENT\nHindi is the official language.\nKNown for its diverse nature.\nIt is one of the largest democracies in th world.\nIt is the 7th largest country in the world.\n1st country to find water on moon.\n2nd largest English speaking country.");


 printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
 scanf("%d",&i);
 if(i==1)                // returns to the main menu
  main();

break;


case 2:  //France
cleardevice();
 outtextxy(430,85,"National Flag:-");
  outtextxy(100,100,"COUNTRY : FRANCE");
    printf("\n\n\n\nCAPITAL:PARIS\nLOCATED IN Europe Continent\nFrench is the official language.\nHas the world fabulous food,amazing artists, memorable monuments and so much more.\nThis is where the French revolution and Napolean wars changed the course of freedom and business in Europe.");

rectangle(400,100,610,220);
  line(470,100,470,220);
  line(540,100,540,220);

  setfillstyle(SOLID_FILL,BLUE);
   floodfill(405,101,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
   floodfill(475,102,WHITE);
  setfillstyle(SOLID_FILL,RED);
   floodfill(545,103,WHITE);
    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
 scanf("%d",&i);
 if(i==1)
  main();


break;
case 3:   //Japan

  cleardevice();
   outtextxy(430,85,"National Flag:-");
    outtextxy(100,100,"COUNTRY : JAPAN");
    printf("\n\n\n\nCAPITAL:TOKYO\nLOCATED IN ASIA CONTINENT\nJapanese is the official language.\nAN ideal place to visit for all otakus outthere in the world;)\nTechnologically advanced nation.\nThe samurai swords and the Sakura blossoming are the main attraction here.");

 rectangle(400,100,610,220);
 circle(505,160,35);
  setfillstyle(SOLID_FILL,RED);
   floodfill(500,160,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
   floodfill(404,102,WHITE);
    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
     if(i==1)
     main();
break;


case 4:      //BRAZIL


  cleardevice();
  outtextxy(430,85,"National Flag:-");
  outtextxy(100,100,"COUNTRY : BRAZIL");
   printf("\n\n\n\nCAPITAL:BRASILIA\nLOCATED IN S.AMERICA CONTINENT\nPortuguese is the official language.\nIt is the home to the world's largest forest system-AMAZON.\nIt has the most famous and celebrated carnival festival in the world\nHome to many football legends.");

rectangle(400,100,610,220);
line(505,110,600,160);
line(600,160,505,210);
line(505,210,410,160);
line(410,160,505,110);
circle(505,160,25);
arc(500,175,23,128,24);

 setfillstyle(SOLID_FILL,GREEN);
  floodfill(404,102,WHITE);
 setfillstyle(SOLID_FILL,YELLOW);
  floodfill(507,112,WHITE);
 setfillstyle(SOLID_FILL,1);
  floodfill(505,160,WHITE);
    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
    if(i==1)
    main();
break;


case 5:  //Israel


cleardevice();
    outtextxy(100,100,"COUNTRY : ISRAEL");
    printf("\n\n\n\nCAPITAL:JERUSALEM\nLOCATED IN ASIA CONTINENT\nHebrew is the official language.\nThe Country located at the center of the world.\nIs a nuclear country regardless the size of the nation.\nThe birthplace of Jesus Christ.");

 outtextxy(430,85,"National Flag:-");
rectangle(400,100,610,220);
line(400,124,610,124);
line(400,196,610,196);

 setfillstyle(SOLID_FILL,01);
  floodfill(401,104,WHITE);
 setfillstyle(SOLID_FILL,01);
  floodfill(403,198,WHITE);
 setfillstyle(SOLID_FILL,WHITE);
  floodfill(401,130,WHITE);

setcolor(1);
line(485,148,525,148);
line(485,149,525,149);
 line(485,172,505,135);
 line(486,172,506,135);

 line(505,135,525,172);
 line(506,135,526,172);

line(485,172,525,172);
line(485,173,525,173);

 line(485,148,505,185);
 line(486,148,506,185);

line(505,185,525,148);
line(506,185,526,148);

    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
    if(i==1)
    main();

break;


case 6:         //Germany

  cleardevice();
    outtextxy(430,85,"National Flag:-");
    outtextxy(100,100,"COUNTRY : GERMANY");
    printf("\n\n\n\nCAPITAL:BERLIN\nLOCATED IN EUROPE CONTINENT\nGerman is the official language.\n The only country to start 2 historic wars(WW1 & WW2).\nHme to some of the famous car companies(Benz,BMW,Audi)\nWorldwide known for its wine and beer");

 rectangle(400,100,610,220);
  line(400,140,610,140);
  line(400,180,610,180);

 setfillstyle(SOLID_FILL,BLACK); //orange
  floodfill(402,102,WHITE);
 setfillstyle(SOLID_FILL,RED);   //white
  floodfill(402,143,WHITE);
 setfillstyle(SOLID_FILL,YELLOW);   //green
  floodfill(402,183,WHITE);
    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
    if(i==1)
    main();

break;


case 7:    //England

  cleardevice();
   outtextxy(430,85,"National Flag:-");
   outtextxy(100,100,"COUNTRY : ENGLAND");
    printf("\n\n\n\nCAPITAL:LONDON\nLOCATED IN EUROPE CONTINENT\nEnglish is the official language.\nIt is the home to several historic places like BigBen, Oxford & Cambridge Universities.\n");

rectangle(400,100,610,220);
line(400,148,493,148);
line(493,148,493,100);
line(517,100,517,148);
line(517,148,610,148);
line(400,172,493,172);
line(493,172,493,220);
line(517,220,517,172);
line(517,172,610,172);
 setfillstyle(SOLID_FILL,RED);   //red
  floodfill(405,150,WHITE);
 setfillstyle(SOLID_FILL,WHITE);
  floodfill(405,101,WHITE);
 setfillstyle(SOLID_FILL,WHITE);
  floodfill(605,105,WHITE);
 setfillstyle(SOLID_FILL,WHITE);
  floodfill(405,210,WHITE);
 setfillstyle(SOLID_FILL,WHITE);
  floodfill(605,210,WHITE);
     printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
     scanf("%d",&i);
     if(i==1)
     main();

  break;


  case 8:    //US

  cleardevice();
    outtextxy(430,85,"National Flag:-");
    outtextxy(100,100,"COUNTRY : THE U.S.A");
    printf("\n\n\n\nCAPITAL:WASHINGTON D.C\nLOCATED IN N. AMERICA CONTINENT\nEnglish is the official language.\nThe first country to gain Independence and spread the idealogy to the rest nations.\nThe country that stopped both great wars( WW1 & 2)\nIt almost tops in every sector of tech,business and other fields");

rectangle(400,100,610,230);
 line(400,170,490,170);
 line(490,170,490,100);
   //small rows
 line(490,110,610,110);
 line(490,120,610,120);
 line(490,130,610,130);
 line(490,140,610,140);
 line(490,150,610,150);
 line(490,160,610,160);
 line(490,170,610,170);
 line(400,180,610,180);
 line(400,190,610,190);
 line(400,200,610,200);
 line(400,210,610,210);
 line(400,220,610,220);
 setfillstyle(SOLID_FILL,RED); //red rows
  floodfill(492,101,WHITE);
  floodfill(492,122,WHITE);
  floodfill(492,142,WHITE);
  floodfill(492,162,WHITE);
  floodfill(402,182,WHITE);
  floodfill(402,202,WHITE);
  floodfill(402,222,WHITE);

 setfillstyle(SOLID_FILL,WHITE); //white rows
  floodfill(492,111,WHITE);
  floodfill(492,132,WHITE);
  floodfill(492,152,WHITE);
  floodfill(492,172,WHITE);
  floodfill(402,192,WHITE);
  floodfill(402,212,WHITE);

 setfillstyle(SOLID_FILL,BLUE); //blue rows
  floodfill(404,111,WHITE);

 outtextxy(401,101,"* * * * * * ");
   outtextxy(401,111," * * * * * *");
 outtextxy(401,121,"* * * * * * ");
   outtextxy(401,131," * * * * * *");
 outtextxy(401,141,"* * * * * * ");
   outtextxy(401,151," * * * * * *");
 outtextxy(401,161,"* * * * * * ");
   outtextxy(401,171," * * * * * *");
    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
    if(i==1)
    main();

break;


case 9:     //Jordan

  cleardevice();
    outtextxy(430,85,"National Flag:-");
    outtextxy(100,100,"COUNTRY : JORDAN");
    printf("\n\n\n\nCAPITAL:AMMAN\nLOCATED IN ASIA CONTINENT\nArabic is the official language.\nIt is the home to the Ancient city of Petra.\nThe famous Jordan river, Mt. Nebo are located here.");

rectangle(400,100,610,220);
 line(468,140,610,140);
 line(468,180,610,180);
  line(400,100,500,160);
  line(500,160,400,220);

  setfillstyle(SOLID_FILL,BLACK);
   floodfill(505,104,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
   floodfill(505,160,WHITE);
  setfillstyle(SOLID_FILL,GREEN);
   floodfill(505,210,WHITE);
   setfillstyle(SOLID_FILL,RED);
   floodfill(410,110,WHITE);

   outtextxy(435,160,"*");
    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
    if(i==1)
    main();

break;


case 10:     //South Africa

  cleardevice();
rectangle(400,100,610,220);

 line(490,140,610,140);
 line(490,180,610,180);
  line(430,100,490,140);
  line(490,180,430,220);
  //white lines
    line(486,145,610,145);
    line(486,175,610,175);
     line(420,100,486,145);
     line(486,175,420,220);
	    //triangle part
  line(470,160,400,210);
  line(400,110,470,160);
   line(460,160,400,203);
   line(400,117,460,160);

 setfillstyle(SOLID_FILL,RED);
  floodfill(605,103,WHITE);
 setfillstyle(SOLID_FILL,GREEN);
  floodfill(605,160,WHITE);
 setfillstyle(SOLID_FILL,BLUE);
  floodfill(605,210,WHITE);
 setfillstyle(SOLID_FILL,WHITE);
  floodfill(486,143,WHITE);
  floodfill(486,176,WHITE);
 setfillstyle(SOLID_FILL,BLACK);
  floodfill(105,160,WHITE);
 setfillstyle(SOLID_FILL,YELLOW);
  floodfill(462,160,WHITE);

    outtextxy(430,85,"National Flag:-");
    outtextxy(100,100,"COUNTRY : SOUTH AFRICA");
    printf("\n\nCAPITAL:CAPE TOWN\nLOCATED IN AFRICA CONTINENT\nAfrikaans is the official language.\nThe only country that totally surrounds another country(Lesotho).\nHome to Lt Nelson Mandela\nHas multicultural diversity just like India.");


   printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
   scanf("%d",&i);
   if(i==1)
   main();

break;


case 11:    //UK
cleardevice();
   outtextxy(430,85,"National Flag:-");
   outtextxy(100,100,"COUNTRY : UK");
    printf("\n\n\nCAPITAL:LONDON\nLOCATED IN EUROPE CONTINENT\nEnglish is the official language.\nIt is the union of countries like England, Scotland, Wales, Northern Ireland\nOnce called British, they were once largest empire in history.\nBuckingham palace, House of Parliament,York Minister are some of the famous places to visit\nIt is the birthplace of 5 major sports: Cricket,Rugby football,Tennis,Golf,Association football");

rectangle(400,100,610,220);
	// cross
line(400,148,493,148);
line(493,148,493,100);
line(517,100,517,148);
line(517,148,610,148);
line(400,172,493,172);
line(493,172,493,220);
line(517,220,517,172);
line(517,172,610,172);
// small blue triangle
  line(400,144,445,144);  //
  line(445,144,400,120);
  line(400,176,445,176);   //
  line(445,176,400,200);
  line(610,144,565,144);   //
  line(565,144,610,120);
  line(610,176,565,176);  //
  line(565,176,610,200);
  //big blue triangle
   line(489,100,489,144);  //
   line(489,144,415,100);
   line(521,100,521,144);  //
   line(521,144,595,100);
   line(595,220,521,176);  //
   line(521,176,521,220);
   line(489,220,489,176); //
   line(489,176,415,220);
      // 4 thick lines
  line(400,107,465,144);
    line(465,144,455,144);
  line(455,144,400,115);
  line(530,144,605,100);
    line(530,144,540,144);
  line(540,144,610,105);
  line(610,205,557,176);
    line(557,176,547,176);
  line(547,176,610,213);
  line(406,220,480,176);
    line(480,176,470,176);
  line(470,176,400,215);

 setfillstyle(SOLID_FILL,RED);   //red
  floodfill(405,150,WHITE);
   floodfill(458,142,WHITE);
   floodfill(535,142,WHITE);
   floodfill(552,178,WHITE);
   floodfill(475,178,WHITE);

 setfillstyle(SOLID_FILL,WHITE);
  floodfill(405,103,WHITE);
  floodfill(405,200,WHITE);
  floodfill(605,121,WHITE);
  floodfill(600,217,WHITE);

  setfillstyle(SOLID_FILL,01);
  floodfill(405,142,WHITE);
  floodfill(487,110,WHITE);
  floodfill(523,110,WHITE);
  floodfill(605,142,WHITE);
  floodfill(605,180,WHITE);
  floodfill(523,210,WHITE);
  floodfill(487,210,WHITE);
  floodfill(405,180,WHITE);

    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
    if(i==1)
    main();

  break;



  case 12:     //Greenland


  cleardevice();
   outtextxy(430,85,"National Flag:-");
   outtextxy(100,100,"COUNTRY : GREENLAND");
    printf("\n\n\n\nCAPITAL:NUUK\nLOCATED IN N.AMERICA CONTINENT\nGreenlandic is the official language.\n Though physiographically part of N America, it is politically and culturally associated with Europe.\nIt is worlds largest island country \nHas the largest ice sheet & therefore the largest body of frozen fresh water");

 rectangle(400,100,610,220);
  line(400,160,610,160);
  circle(460,160,35);

 setfillstyle(SOLID_FILL,WHITE); //white
  floodfill(402,102,WHITE);
   floodfill(455,165,WHITE);
 setfillstyle(SOLID_FILL,RED);   //red
   floodfill(455,155,WHITE);
   floodfill(402,200,WHITE);
    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
    if(i==1)
    main();

break;


 case 13:		//Macedonia

  cleardevice();
    outtextxy(430,85,"National Flag:-");
    outtextxy(100,100,"COUNTRY : MACEDONIA");
     printf("\n\n\n\nCAPITAL:SKOPJE\nLOCATED IN EUROPE CONTINENT\nMacedonian is the official language.\n.It is one of the landlock mountain countries.\nThe famous Alexander The Great was born here.");

rectangle(400,100,610,220);
 circle(505,160,15);

 line(485,158,400,150);
 line(485,162,400,170);
 line(485,158,485,162);
 line(525,158,610,150);
 line(525,162,610,170);
 line(525,158,525,162);

 line(503,140,490,100);
 line(507,140,520,100);
 line(503,140,507,140);
 line(503,180,490,220);
 line(507,180,520,220);
 line(503,180,507,180);

 line(492,147,400,100);
 line(491,146,430,100);
   line(492,147,491,146);
 line(518,147,610,100);
 line(517,146,580,100);
   line(518,147,517,146);
 line(518,173,610,220);
 line(517,174,580,220);
   line(518,173,517,174);
 line(492,173,400,220);
 line(493,174,430,220);
   line(492,173,493,174);

  setfillstyle(SOLID_FILL,RED);
   floodfill(401,120,WHITE);
  setfillstyle(SOLID_FILL,YELLOW);
   floodfill(505,160,WHITE);
   floodfill(405,102,WHITE);
   floodfill(505,102,WHITE);
   floodfill(605,102,WHITE);
  floodfill(605,160,WHITE);
  floodfill(600,217,WHITE);
  floodfill(505,215,WHITE);
  floodfill(410,217,WHITE);
  floodfill(405,160,WHITE);

    printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
    scanf("%d",&i);
    if(i==1)
    main();

break;


 case 14:
  cleardevice();

  outtextxy(430,85,"National Flag:-");
  rectangle(400,100,600,220); // flag


 line(400,140,600,140);
 line(400,180,600,180);
    circle(500,160,11);
    circle(500,160,6);

 setfillstyle(SOLID_FILL,9); //blue
  floodfill(402,102,WHITE);
  floodfill(402,183,WHITE);
 setfillstyle(SOLID_FILL,WHITE);   //white
  floodfill(402,160,WHITE);

 setfillstyle(SOLID_FILL,14);   //yellow
  floodfill(497,160,WHITE);

 setfillstyle(SOLID_FILL,6);   //brown
  floodfill(509,160,WHITE);


 setcolor(14);

 line(480,160,520,160);
 line(500,140,500,180);
    //24 lines
 line(500,160,514,145); //top ryt
     line(500,160,507,143);
     line(500,160,517,152);
 line(500,160,514,175); //bottom ryt
      line(500,160,507,177);
      line(500,160,517,168);
 line(500,160,486,145); //top left
      line(500,160,493,143);
      line(500,160,481,152);
 line(500,160,486,175); //bottom ryt
      line(500,160,493,177);
      line(500,160,481,168);

      outtextxy(100,100,"COUNTRY : ARGENTINA");
    printf("\n\nCAPITAL:BUENOS AIRES\nLOCATED IN S. AMERICA CONTINENT\nSpanish is the official language.\nFamous for its Tango dance and music.\nFootball legends like Maradona, Messi are from here.\n8th largest country in the world.\nFootball is the favourite game here.");



 printf("\n\nPress 1 to go bACK TO MAIN MENU\n");
 scanf("%d",&i);
 if(i==1)                // returns to the main menu
  main();

break;



  case 15:
  exit(0);

  default:
  printf("Select proper option");
  break;
    }


 getch();
 closegraph();
 return 0;
 }
