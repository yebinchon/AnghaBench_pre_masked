
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int dummy; } ;
struct address_space {int host; } ;
typedef int fstrans_cookie_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct page*,struct writeback_control*) ;

int
FUNC_6(struct page *VAR_0, struct writeback_control *VAR_1, void *VAR_2)
{
 struct address_space *VAR_3 = VAR_2;
 fstrans_cookie_t VAR_4;

 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(!FUNC_2(VAR_0));

 VAR_4 = FUNC_3();
 (void) FUNC_5(VAR_3->host, VAR_0, VAR_1);
 FUNC_4(VAR_4);

 return (0);
}
