
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int fstrans_cookie_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*,struct page**,int) ;

__attribute__((used)) static int
FUNC_11(struct file *VAR_0, struct page *VAR_1)
{
 struct inode *VAR_2;
 struct page *VAR_3[1];
 int VAR_4 = 0;
 fstrans_cookie_t VAR_5;

 FUNC_0(FUNC_3(VAR_1));
 VAR_2 = VAR_1->mapping->host;
 VAR_3[0] = VAR_1;

 VAR_5 = FUNC_7();
 VAR_4 = -FUNC_10(VAR_2, VAR_3, 1);
 FUNC_8(VAR_5);

 if (VAR_4) {
  FUNC_4(VAR_1);
  FUNC_2(VAR_1);
 } else {
  FUNC_1(VAR_1);
  FUNC_5(VAR_1);
  FUNC_6(VAR_1);
 }

 FUNC_9(VAR_1);
 return (VAR_4);
}
