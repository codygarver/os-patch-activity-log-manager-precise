/*
 * Generated by gdbus-codegen 2.31.18. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __WHOOPSIE_GENERATED_H__
#define __WHOOPSIE_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for com.ubuntu.WhoopsiePreferences */

#define TYPE_WHOOPSIE_PREFERENCES (whoopsie_preferences_get_type ())
#define WHOOPSIE_PREFERENCES(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_WHOOPSIE_PREFERENCES, WhoopsiePreferences))
#define IS_WHOOPSIE_PREFERENCES(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_WHOOPSIE_PREFERENCES))
#define WHOOPSIE_PREFERENCES_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_WHOOPSIE_PREFERENCES, WhoopsiePreferencesIface))

struct _WhoopsiePreferences;
typedef struct _WhoopsiePreferences WhoopsiePreferences;
typedef struct _WhoopsiePreferencesIface WhoopsiePreferencesIface;

struct _WhoopsiePreferencesIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_set_report_crashes) (
    WhoopsiePreferences *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_report);

  gboolean  (*get_report_crashes) (WhoopsiePreferences *object);

};

GType whoopsie_preferences_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *whoopsie_preferences_interface_info (void);
guint whoopsie_preferences_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void whoopsie_preferences_complete_set_report_crashes (
    WhoopsiePreferences *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void whoopsie_preferences_call_set_report_crashes (
    WhoopsiePreferences *proxy,
    gboolean arg_report,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean whoopsie_preferences_call_set_report_crashes_finish (
    WhoopsiePreferences *proxy,
    GAsyncResult *res,
    GError **error);

gboolean whoopsie_preferences_call_set_report_crashes_sync (
    WhoopsiePreferences *proxy,
    gboolean arg_report,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gboolean whoopsie_preferences_get_report_crashes (WhoopsiePreferences *object);
void whoopsie_preferences_set_report_crashes (WhoopsiePreferences *object, gboolean value);


/* ---- */

#define TYPE_WHOOPSIE_PREFERENCES_PROXY (whoopsie_preferences_proxy_get_type ())
#define WHOOPSIE_PREFERENCES_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_WHOOPSIE_PREFERENCES_PROXY, WhoopsiePreferencesProxy))
#define WHOOPSIE_PREFERENCES_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_WHOOPSIE_PREFERENCES_PROXY, WhoopsiePreferencesProxyClass))
#define WHOOPSIE_PREFERENCES_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_WHOOPSIE_PREFERENCES_PROXY, WhoopsiePreferencesProxyClass))
#define IS_WHOOPSIE_PREFERENCES_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_WHOOPSIE_PREFERENCES_PROXY))
#define IS_WHOOPSIE_PREFERENCES_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_WHOOPSIE_PREFERENCES_PROXY))

typedef struct _WhoopsiePreferencesProxy WhoopsiePreferencesProxy;
typedef struct _WhoopsiePreferencesProxyClass WhoopsiePreferencesProxyClass;
typedef struct _WhoopsiePreferencesProxyPrivate WhoopsiePreferencesProxyPrivate;

struct _WhoopsiePreferencesProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  WhoopsiePreferencesProxyPrivate *priv;
};

struct _WhoopsiePreferencesProxyClass
{
  GDBusProxyClass parent_class;
};

GType whoopsie_preferences_proxy_get_type (void) G_GNUC_CONST;

void whoopsie_preferences_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
WhoopsiePreferences *whoopsie_preferences_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
WhoopsiePreferences *whoopsie_preferences_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void whoopsie_preferences_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
WhoopsiePreferences *whoopsie_preferences_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
WhoopsiePreferences *whoopsie_preferences_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_WHOOPSIE_PREFERENCES_SKELETON (whoopsie_preferences_skeleton_get_type ())
#define WHOOPSIE_PREFERENCES_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_WHOOPSIE_PREFERENCES_SKELETON, WhoopsiePreferencesSkeleton))
#define WHOOPSIE_PREFERENCES_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_WHOOPSIE_PREFERENCES_SKELETON, WhoopsiePreferencesSkeletonClass))
#define WHOOPSIE_PREFERENCES_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_WHOOPSIE_PREFERENCES_SKELETON, WhoopsiePreferencesSkeletonClass))
#define IS_WHOOPSIE_PREFERENCES_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_WHOOPSIE_PREFERENCES_SKELETON))
#define IS_WHOOPSIE_PREFERENCES_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_WHOOPSIE_PREFERENCES_SKELETON))

typedef struct _WhoopsiePreferencesSkeleton WhoopsiePreferencesSkeleton;
typedef struct _WhoopsiePreferencesSkeletonClass WhoopsiePreferencesSkeletonClass;
typedef struct _WhoopsiePreferencesSkeletonPrivate WhoopsiePreferencesSkeletonPrivate;

struct _WhoopsiePreferencesSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  WhoopsiePreferencesSkeletonPrivate *priv;
};

struct _WhoopsiePreferencesSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType whoopsie_preferences_skeleton_get_type (void) G_GNUC_CONST;

WhoopsiePreferences *whoopsie_preferences_skeleton_new (void);


G_END_DECLS

#endif /* __WHOOPSIE_GENERATED_H__ */
