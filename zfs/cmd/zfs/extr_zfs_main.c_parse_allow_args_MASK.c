
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allow_opts {int user; int group; int everyone; int create; int set; int local; int descend; int recursive; char* dataset; char* who; int perms; void* prt_perms; scalar_t__ prt_usage; } ;
typedef scalar_t__ boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (scalar_t__,void*,int *) ;
 int * FUNC_1 (char*) ;
 void* FUNC_2 (int,char**,scalar_t__,int,int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void
FUNC_5(int VAR_2, char **VAR_3, boolean_t VAR_4, struct allow_opts *VAR_5)
{
 int VAR_6 = VAR_5->user + VAR_5->group + VAR_5->everyone;
 int VAR_7 = VAR_5->create + VAR_5->set + VAR_6;
 int VAR_8 = VAR_7 + VAR_5->local + VAR_5->descend;
 int VAR_9 = VAR_4 ? VAR_8 + VAR_5->recursive : VAR_8;

 if (VAR_6 > 1)
  FUNC_0(VAR_4, VAR_0,
      FUNC_1("-u, -g, and -e are mutually exclusive\n"));

 if (VAR_5->prt_usage) {
  if (VAR_2 == 0 && VAR_9 == 0)
   FUNC_0(VAR_4, VAR_1, ((void*)0));
  else
   FUNC_4(VAR_0);
 }

 if (VAR_5->set) {
  if (VAR_7 > 1)
   FUNC_0(VAR_4, VAR_0,
       FUNC_1("invalid options combined with -s\n"));

  VAR_5->dataset = FUNC_2(VAR_2, VAR_3, VAR_4, 3, &VAR_5->perms);
  if (VAR_3[0][0] != '@')
   FUNC_0(VAR_4, VAR_0,
       FUNC_1("invalid set name: missing '@' prefix\n"));
  VAR_5->who = VAR_3[0];
 } else if (VAR_5->create) {
  if (VAR_8 > 1)
   FUNC_0(VAR_4, VAR_0,
       FUNC_1("invalid options combined with -c\n"));
  VAR_5->dataset = FUNC_2(VAR_2, VAR_3, VAR_4, 2, &VAR_5->perms);
 } else if (VAR_5->everyone) {
  if (VAR_7 > 1)
   FUNC_0(VAR_4, VAR_0,
       FUNC_1("invalid options combined with -e\n"));
  VAR_5->dataset = FUNC_2(VAR_2, VAR_3, VAR_4, 2, &VAR_5->perms);
 } else if (VAR_6 == 0 && VAR_2 > 0 && FUNC_3(VAR_3[0], "everyone")
     == 0) {
  VAR_5->everyone = VAR_1;
  VAR_2--;
  VAR_3++;
  VAR_5->dataset = FUNC_2(VAR_2, VAR_3, VAR_4, 2, &VAR_5->perms);
 } else if (VAR_2 == 1 && !VAR_4) {
  VAR_5->prt_perms = VAR_1;
  VAR_5->dataset = VAR_3[VAR_2-1];
 } else {
  VAR_5->dataset = FUNC_2(VAR_2, VAR_3, VAR_4, 3, &VAR_5->perms);
  VAR_5->who = VAR_3[0];
 }

 if (!VAR_5->local && !VAR_5->descend) {
  VAR_5->local = VAR_1;
  VAR_5->descend = VAR_1;
 }
}
