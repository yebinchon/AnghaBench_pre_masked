
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uio_seg_t ;
struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct file {unsigned int f_flags; TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef int cred_t ;
struct TYPE_2__ {int host; } ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct kiocb*) ;
 int FUNC_4 (int ,struct iovec const*,size_t,unsigned long,int *,int ,unsigned int,int *,size_t) ;

__attribute__((used)) static ssize_t
FUNC_5(struct kiocb *VAR_0, const struct iovec *VAR_1,
    unsigned long VAR_2, size_t VAR_3, uio_seg_t VAR_4, size_t VAR_5)
{
 cred_t *VAR_6 = FUNC_0();
 struct file *VAR_7 = VAR_0->ki_filp;
 ssize_t VAR_8;
 unsigned int VAR_9 = VAR_7->f_flags;

 VAR_9 |= FUNC_3(VAR_0);
 FUNC_2(VAR_6);
 VAR_8 = FUNC_4(VAR_7->f_mapping->host, VAR_1, VAR_3,
     VAR_2, &VAR_0->ki_pos, VAR_4, VAR_9, VAR_6, VAR_5);
 FUNC_1(VAR_6);

 return (VAR_8);
}
