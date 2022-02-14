
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct input {int * buf; int allow_empty; } ;
typedef enum input_status { ____Placeholder_input_status } input_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct key*) ;

enum input_status
FUNC_1(struct input *VAR_4, struct key *VAR_5)
{
 switch (FUNC_0(VAR_5)) {
 case 128:
 case 130:
 case '\n':
  return *VAR_4->buf || VAR_4->allow_empty ? VAR_3 : VAR_0;

 case 131:
  return *VAR_4->buf ? VAR_1 : VAR_0;

 case 129:
  return VAR_0;

 default:
  return VAR_2;
 }
}
