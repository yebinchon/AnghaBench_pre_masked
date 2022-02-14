
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (int,char*) ;
 int VAR_7 ;

__attribute__((used)) static __inline int
FUNC_1(uint32_t VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
 case 134:
  VAR_9 = VAR_0;
  break;
 case 128:
  VAR_9 = VAR_6;
  break;
 case 129:
  VAR_9 = VAR_5;
  break;
 case 130:
  VAR_9 = VAR_4;
  break;
 case 132:
  VAR_9 = VAR_2;
  break;
 case 131:
  VAR_9 = VAR_3;
  break;
 case 133:
  VAR_9 = VAR_1;
  break;
 default:
  VAR_9 = -1;
  break;
 }
 FUNC_0(VAR_9 >= 0 && VAR_9 <= VAR_7, ("lvt_off_to_idx: "
     "invalid lvt index %d for offset %#x", VAR_9, VAR_8));

 return (VAR_9);
}
