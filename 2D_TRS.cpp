#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
     int gd=DETECT,gm;
     int x,y,x1,y1,tx,ty,tx1,ty1;
     int ch,sx,sy,ang;
     initgraph(&gd,&gm,(char*)"");
     printf("\n Enter the cordinate of rectangle(left,top,right,bottom):");
     scanf("%d%d%d%d",&x,&y,&x1,&y1);
     setcolor(WHITE);
     rectangle(x,y,x1,y1);

 do
 {
    printf("TRANSFORMATION");
    printf("\n1.translation\n2.scaling\n3.rotation\n4.exit");
    printf("\nEnter your choice\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("translation:\n");
        printf("enter translation distance(tx,ty,tx1,ty1):");
        scanf("%d%d%d%d",&tx,&ty,&tx1,&ty1);
        setcolor(WHITE);
        rectangle((x+tx),(y+ty),(x1+tx1),(y1+ty1));
        break;

        case 2: printf("\n Scalling:");
        printf("\nEnter the scalling factor(sx,sy):");
        scanf("%d%d",&sx,&sy);
        setcolor(WHITE);
        rectangle(x,y,(x1*sx),(y1*sy));
        break;

        case 3: printf("\nROTATION");
        printf("\nEnter the angles:");
        scanf("%d",&ang);
        setcolor(WHITE);
        rectangle(x,y,((x*cos(ang))+(y*sin(ang))),((x*sin(ang))+(y*cos(ang))));
        break;

        case 4: exit(0);
        }

    }
    while(ch!=4);
    getch();
}


