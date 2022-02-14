
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathname {size_t pn_bufsize; scalar_t__ pn_pathlen; int pn_buf; int pn_path; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;

void
FUNC_1(struct pathname *VAR_1, size_t VAR_2)
{
 VAR_1->pn_buf = FUNC_0(VAR_2, VAR_0);
 VAR_1->pn_bufsize = VAR_2;




}
