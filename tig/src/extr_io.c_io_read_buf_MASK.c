
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
struct buffer {scalar_t__ data; int member_0; } ;


 scalar_t__ FUNC_0 (struct io*) ;
 scalar_t__ FUNC_1 (struct io*,struct buffer*,char,int) ;
 int FUNC_2 (char*,size_t,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

bool
FUNC_5(struct io *VAR_0, char VAR_1[], size_t VAR_2, bool VAR_3)
{
 struct buffer VAR_4 = {0};

 if (FUNC_1(VAR_0, &VAR_4, '\n', 1)) {
  VAR_4.data = FUNC_3(VAR_4.data);
  FUNC_2(VAR_1, VAR_2, VAR_4.data, FUNC_4(VAR_4.data));
 }

 return FUNC_0(VAR_0) && (VAR_4.data || VAR_3);
}
