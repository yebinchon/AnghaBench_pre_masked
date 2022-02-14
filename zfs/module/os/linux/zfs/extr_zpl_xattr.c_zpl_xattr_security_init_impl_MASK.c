
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr {int value_len; int value; int * name; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, const struct xattr *VAR_1,
    void *VAR_2)
{
 const struct xattr *VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++) {
  VAR_4 = FUNC_0(VAR_0,
      VAR_3->name, VAR_3->value, VAR_3->value_len, 0);

  if (VAR_4 < 0)
   break;
 }

 return (VAR_4);
}
