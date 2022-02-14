
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct format_tree {int flags; TYPE_1__* client; int tag; } ;
struct format_job_tree {int dummy; } ;
struct format_job {char const* cmd; char* out; scalar_t__ last; int status; scalar_t__ updated; int * job; int * expanded; int tag; TYPE_1__* client; } ;
struct TYPE_2__ {struct format_job_tree* jobs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct format_job* FUNC_0 (int ,struct format_job_tree*,struct format_job*) ;
 int FUNC_1 (struct format_job_tree*) ;
 int FUNC_2 (int ,struct format_job_tree*,struct format_job*) ;
 char* FUNC_3 (struct format_tree*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct format_job_tree VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int *,int ,int ,int ,int *,struct format_job*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (char*,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char**,char*,char const*) ;
 struct format_job* FUNC_11 (int,int) ;
 struct format_job_tree* FUNC_12 (int) ;
 void* FUNC_13 (char const*) ;

__attribute__((used)) static char *
FUNC_14(struct format_tree *VAR_7, const char *VAR_8)
{
 struct format_job_tree *VAR_9;
 struct format_job VAR_10, *VAR_11;
 time_t VAR_12;
 char *VAR_13;
 int VAR_14;

 if (VAR_7->client == ((void*)0))
  VAR_9 = &VAR_6;
 else if (VAR_7->client->jobs != ((void*)0))
  VAR_9 = VAR_7->client->jobs;
 else {
  VAR_9 = VAR_7->client->jobs = FUNC_12(sizeof *VAR_7->client->jobs);
  FUNC_1(VAR_9);
 }

 VAR_10 = VAR_7->tag;
 VAR_10 = VAR_8;
 if ((VAR_11 = FUNC_0(VAR_4, VAR_9, &VAR_10)) == ((void*)0)) {
  VAR_11 = FUNC_11(1, sizeof *VAR_11);
  VAR_11->client = VAR_7->client;
  VAR_11->tag = VAR_7->tag;
  VAR_11->cmd = FUNC_13(VAR_8);
  VAR_11->expanded = ((void*)0);

  FUNC_10(&VAR_11->out, "<'%s' not ready>", VAR_11->cmd);

  FUNC_2(VAR_4, VAR_9, VAR_11);
 }

 VAR_13 = FUNC_3(VAR_7, VAR_8);
 if (VAR_11->expanded == ((void*)0) || FUNC_8(VAR_13, VAR_11->expanded) != 0) {
  FUNC_4((void *)VAR_11->expanded);
  VAR_11->expanded = FUNC_13(VAR_13);
  VAR_14 = 1;
 } else
  VAR_14 = (VAR_7->flags & VAR_0);

 VAR_12 = FUNC_9(((void*)0));
 if (VAR_14 && VAR_11->job != ((void*)0))
        FUNC_5(VAR_11->job);
 if (VAR_14 || (VAR_11->job == ((void*)0) && VAR_11->last != VAR_12)) {
  VAR_11->job = FUNC_6(VAR_13, ((void*)0),
      FUNC_7(VAR_7->client, ((void*)0)), VAR_5,
      VAR_3, ((void*)0), VAR_11, VAR_2);
  if (VAR_11->job == ((void*)0)) {
   FUNC_4(VAR_11->out);
   FUNC_10(&VAR_11->out, "<'%s' didn't start>", VAR_11->cmd);
  }
  VAR_11->last = VAR_12;
  VAR_11->updated = 0;
 }

 if (VAR_7->flags & VAR_1)
  VAR_11->status = 1;

 FUNC_4(VAR_13);
 return (FUNC_3(VAR_7, VAR_11->out));
}
