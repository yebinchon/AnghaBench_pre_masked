
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {struct paste_buffer* name; struct paste_buffer* data; scalar_t__ automatic; } ;


 int FUNC_0 (int ,int *,struct paste_buffer*) ;
 int FUNC_1 (struct paste_buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_2(struct paste_buffer *VAR_5)
{
 FUNC_0(VAR_2, &VAR_0, VAR_5);
 FUNC_0(VAR_4, &VAR_1, VAR_5);
 if (VAR_5->automatic)
  VAR_3--;

 FUNC_1(VAR_5->data);
 FUNC_1(VAR_5->name);
 FUNC_1(VAR_5);
}
