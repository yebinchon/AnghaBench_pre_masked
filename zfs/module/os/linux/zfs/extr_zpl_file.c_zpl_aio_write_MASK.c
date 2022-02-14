
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_mode; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct iovec const*,unsigned long*,size_t*,int ) ;
 scalar_t__ FUNC_2 (struct file*,int *,size_t*,int) ;
 scalar_t__ FUNC_3 (struct kiocb*,struct iovec const*,unsigned long,size_t,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct kiocb *VAR_2, const struct iovec *VAR_3,
    unsigned long VAR_4, loff_t VAR_5)
{
 struct file *VAR_6 = VAR_2->ki_filp;
 struct address_space *VAR_7 = VAR_6->f_mapping;
 struct inode *VAR_8 = VAR_7->host;
 int VAR_9 = FUNC_0(VAR_8->i_mode);
 size_t VAR_10;
 ssize_t VAR_11;

 VAR_11 = FUNC_1(VAR_3, &VAR_4, &VAR_10, VAR_1);
 if (VAR_11)
  return (VAR_11);

 VAR_11 = FUNC_2(VAR_6, &VAR_5, &VAR_10, VAR_9);
 if (VAR_11)
  return (VAR_11);

 return (FUNC_3(VAR_2, VAR_3, VAR_4, VAR_10,
     VAR_0, 0));
}
