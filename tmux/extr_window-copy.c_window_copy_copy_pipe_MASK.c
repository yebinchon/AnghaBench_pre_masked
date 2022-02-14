
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {int dummy; } ;
struct session {int dummy; } ;
struct job {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (struct job*) ;
 struct job* FUNC_2 (char const*,struct session*,int *,int *,int *,int *,int *,int ) ;
 int FUNC_3 (struct window_mode_entry*,char const*,void*,size_t) ;
 void* FUNC_4 (struct window_mode_entry*,size_t*) ;

__attribute__((used)) static void
FUNC_5(struct window_mode_entry *VAR_1, struct session *VAR_2,
    const char *VAR_3, const char *VAR_4)
{
 void *VAR_5;
 size_t VAR_6;
 struct job *VAR_7;

 VAR_5 = FUNC_4(VAR_1, &VAR_6);
 if (VAR_5 == ((void*)0))
  return;

 VAR_7 = FUNC_2(VAR_4, VAR_2, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_0);
 FUNC_0(FUNC_1(VAR_7), VAR_5, VAR_6);
 FUNC_3(VAR_1, VAR_3, VAR_5, VAR_6);
}
