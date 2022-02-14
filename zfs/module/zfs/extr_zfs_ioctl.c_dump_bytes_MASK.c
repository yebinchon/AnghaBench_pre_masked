
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_5__ {int dbi_len; int dbi_err; void* dbi_buf; void* dbi_vp; } ;
typedef TYPE_1__ dump_bytes_io_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int (*) (TYPE_1__*),TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(objset_t *VAR_3, void *VAR_4, int VAR_5, void *VAR_6)
{
 dump_bytes_io_t VAR_7;

 VAR_7.dbi_vp = VAR_6;
 VAR_7.dbi_buf = VAR_4;
 VAR_7.dbi_len = VAR_5;
 FUNC_2(FUNC_0(VAR_3), VAR_2,
     VAR_1, FUNC_1, &VAR_7, VAR_0);


 return (VAR_7.dbi_err);
}
