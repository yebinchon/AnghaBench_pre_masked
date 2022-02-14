
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int oy; int backing; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,int ,char const**) ;
 int FUNC_2 (struct window_mode_entry*) ;
 int FUNC_3 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_4(struct window_mode_entry *VAR_1, const char *VAR_2)
{
 struct window_copy_mode_data *VAR_3 = VAR_1->data;
 const char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, -1, VAR_0, &VAR_4);
 if (VAR_4 != ((void*)0))
  return;
 if (VAR_5 < 0 || (u_int)VAR_5 > FUNC_0(VAR_3->backing))
  VAR_5 = FUNC_0(VAR_3->backing);

 VAR_3->oy = VAR_5;
 FUNC_3(VAR_1, 1);
 FUNC_2(VAR_1);
}
