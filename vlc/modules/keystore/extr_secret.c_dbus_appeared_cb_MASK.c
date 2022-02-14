
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secrets_watch_data {int b_running; int sem; } ;
typedef struct secrets_watch_data* gpointer ;
typedef int gchar ;
typedef int GDBusConnection ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(GDBusConnection *VAR_0, const gchar *VAR_1,
                const gchar *VAR_2, gpointer VAR_3)
{
    (void) VAR_0; (void) VAR_1; (void)VAR_2;
    struct secrets_watch_data *VAR_4 = VAR_3;
    VAR_4->b_running = 1;
    FUNC_0(&VAR_4->sem);
}
