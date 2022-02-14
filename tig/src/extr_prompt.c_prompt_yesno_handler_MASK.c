
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct input {int dummy; } ;
typedef enum input_status { ____Placeholder_input_status } input_status ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (struct key*) ;
 unsigned long FUNC_1 (struct key*) ;
 int FUNC_2 (struct input*,struct key*) ;

__attribute__((used)) static enum input_status
FUNC_3(struct input *VAR_2, struct key *VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 == 'y' || VAR_4 == 'Y')
  return VAR_1;
 if (VAR_4 == 'n' || VAR_4 == 'N' || FUNC_0(VAR_3) == 'C')
  return VAR_0;
 return FUNC_2(VAR_2, VAR_3);
}
