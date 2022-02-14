
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int dbi_len; scalar_t__ dbi_buf; int dbi_vp; int dbi_err; } ;
typedef TYPE_1__ dump_bytes_io_t ;
typedef int caddr_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_4)
{
 dump_bytes_io_t *VAR_5 = (dump_bytes_io_t *)VAR_4;
 ssize_t VAR_6;

 VAR_5->dbi_err = FUNC_1(VAR_3, VAR_5->dbi_vp,
     (caddr_t)VAR_5->dbi_buf, VAR_5->dbi_len,
     0, VAR_2, VAR_0, VAR_1, FUNC_0(), &VAR_6);
}
