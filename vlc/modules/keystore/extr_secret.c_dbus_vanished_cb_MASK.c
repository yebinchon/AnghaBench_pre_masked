
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
                gpointer VAR_2)
{
    (void) VAR_0; (void) VAR_1;
    struct secrets_watch_data *VAR_3 = VAR_2;
    VAR_3->b_running = 0;
    FUNC_0(&VAR_3->sem);
}
