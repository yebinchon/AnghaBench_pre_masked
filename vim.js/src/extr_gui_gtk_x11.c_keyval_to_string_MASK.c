
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint32 ;
typedef int char_u ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 unsigned int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static int
FUNC_2(unsigned int VAR_8, unsigned int VAR_9, char_u *VAR_10)
{
    int VAR_11;
    guint32 VAR_12;

    VAR_12 = FUNC_0(VAR_8);
    if (VAR_12 != 0)
    {

 if ((VAR_9 & VAR_4) && VAR_12 >= 0x20 && VAR_12 < 0x80)
 {




     if (VAR_12 >= '@')
  VAR_10[0] = VAR_12 & 0x1F;
     else if (VAR_12 == '2')
  VAR_10[0] = VAR_6;
     else if (VAR_12 >= '3' && VAR_12 <= '7')
  VAR_10[0] = VAR_12 ^ 0x28;
     else if (VAR_12 == '8')
  VAR_10[0] = VAR_0;
     else if (VAR_12 == '?')
  VAR_10[0] = VAR_2;
     else
  VAR_10[0] = VAR_12;
     VAR_11 = 1;
 }
 else
 {


     VAR_11 = FUNC_1((int)VAR_12, VAR_10);
 }
    }
    else
    {



 VAR_11 = 1;
 switch (VAR_8)
 {
     case 128: case 131: case 132:
  VAR_10[0] = VAR_7;
  break;
     case 130:
  VAR_10[0] = VAR_5;
  break;
     case 129: case 133: case 135:
  VAR_10[0] = VAR_1;
  break;
     case 134:
  VAR_10[0] = VAR_3;
  break;
     default:
  VAR_11 = 0;
  break;
 }
    }
    VAR_10[VAR_11] = VAR_6;

    return VAR_11;
}
