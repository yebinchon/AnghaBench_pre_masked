
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* member; int signature; } ;
struct TYPE_6__ {char* member; int names; int result; int signature; } ;
struct TYPE_5__ {char* member; char* signature; } ;
struct TYPE_8__ {TYPE_3__ signal; TYPE_2__ method; TYPE_1__ property; } ;
typedef struct introspect {int type; int flags; int f; TYPE_4__ x; } const introspect ;
typedef struct introspect sd_bus_vtable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct introspect const*) ;
 int FUNC_1 (struct introspect const*) ;
 struct introspect* FUNC_2 (struct introspect const*,struct introspect const*) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct introspect const*,char*,char const**,char*) ;
 int FUNC_6 (struct introspect const*,int,int) ;
 char* FUNC_7 (int ) ;

int FUNC_8(struct introspect *VAR_3, const sd_bus_vtable *VAR_4) {
        const sd_bus_vtable *VAR_5 = VAR_4;
        const char *VAR_6 = "";

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        for (; VAR_4->type != VAR_2; VAR_4 = FUNC_2(VAR_5, VAR_4)) {





                if (VAR_4->type != 129 && (VAR_4->flags & VAR_1))
                        continue;

                switch (VAR_4->type) {

                case 129:
                        if (VAR_4->flags & VAR_0)
                                FUNC_4("  <annotation name=\"org.freedesktop.DBus.Deprecated\" value=\"true\"/>\n", VAR_3->f);
                        break;

                case 132:
                        FUNC_3(VAR_3->f, "  <method name=\"%s\">\n", VAR_4->x.method.member);
                        if (FUNC_1(VAR_5))
                                VAR_6 = FUNC_7(VAR_4->x.method.names);
                        FUNC_5(VAR_3, FUNC_7(VAR_4->x.method.signature), &VAR_6, "in");
                        FUNC_5(VAR_3, FUNC_7(VAR_4->x.method.result), &VAR_6, "out");
                        FUNC_6(VAR_3, VAR_4->type, VAR_4->flags);
                        FUNC_4("  </method>\n", VAR_3->f);
                        break;

                case 131:
                case 128:
                        FUNC_3(VAR_3->f, "  <property name=\"%s\" type=\"%s\" access=\"%s\">\n",
                                VAR_4->x.property.member,
                                VAR_4->x.property.signature,
                                VAR_4->type == 128 ? "readwrite" : "read");
                        FUNC_6(VAR_3, VAR_4->type, VAR_4->flags);
                        FUNC_4("  </property>\n", VAR_3->f);
                        break;

                case 130:
                        FUNC_3(VAR_3->f, "  <signal name=\"%s\">\n", VAR_4->x.signal.member);
                        if (FUNC_1(VAR_5))
                                VAR_6 = FUNC_7(VAR_4->x.method.names);
                        FUNC_5(VAR_3, FUNC_7(VAR_4->x.signal.signature), &VAR_6, ((void*)0));
                        FUNC_6(VAR_3, VAR_4->type, VAR_4->flags);
                        FUNC_4("  </signal>\n", VAR_3->f);
                        break;
                }

        }

        return 0;
}
