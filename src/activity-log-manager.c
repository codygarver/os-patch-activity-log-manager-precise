/* activity-log-manager.c generated by valac 0.14.2, the Vala compiler
 * generated from activity-log-manager.vala, do not modify */

/*
 * activity-log-manager.vala
 * Copyright (C) 2012 Seif Lotfy <seif@lotfy.com>
 * Copyright (C) 2012 Stefano Candori <stefano.candori@gmail.com>
 * Copyright (C) 2012 Manish Sinha <manishsinha@ubuntu.com>
 * Copyright (C) 2012 Intel Corp.
 *               Authored by: Seif Lotfy <seif.lotfy@collabora.co.uk>
 * 
 * alm is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * 
 * alm is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.";
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>


#define ALM_TYPE_ACTIVITY_LOG_MANAGER (alm_activity_log_manager_get_type ())
#define ALM_ACTIVITY_LOG_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ALM_TYPE_ACTIVITY_LOG_MANAGER, AlmActivityLogManager))
#define ALM_ACTIVITY_LOG_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ALM_TYPE_ACTIVITY_LOG_MANAGER, AlmActivityLogManagerClass))
#define ALM_IS_ACTIVITY_LOG_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ALM_TYPE_ACTIVITY_LOG_MANAGER))
#define ALM_IS_ACTIVITY_LOG_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ALM_TYPE_ACTIVITY_LOG_MANAGER))
#define ALM_ACTIVITY_LOG_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ALM_TYPE_ACTIVITY_LOG_MANAGER, AlmActivityLogManagerClass))

typedef struct _AlmActivityLogManager AlmActivityLogManager;
typedef struct _AlmActivityLogManagerClass AlmActivityLogManagerClass;
typedef struct _AlmActivityLogManagerPrivate AlmActivityLogManagerPrivate;

#define ALM_TYPE_HISTORY_WIDGET (alm_history_widget_get_type ())
#define ALM_HISTORY_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ALM_TYPE_HISTORY_WIDGET, AlmHistoryWidget))
#define ALM_HISTORY_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ALM_TYPE_HISTORY_WIDGET, AlmHistoryWidgetClass))
#define ALM_IS_HISTORY_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ALM_TYPE_HISTORY_WIDGET))
#define ALM_IS_HISTORY_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ALM_TYPE_HISTORY_WIDGET))
#define ALM_HISTORY_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ALM_TYPE_HISTORY_WIDGET, AlmHistoryWidgetClass))

typedef struct _AlmHistoryWidget AlmHistoryWidget;
typedef struct _AlmHistoryWidgetClass AlmHistoryWidgetClass;

#define ALM_TYPE_FILES_WIDGET (alm_files_widget_get_type ())
#define ALM_FILES_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ALM_TYPE_FILES_WIDGET, AlmFilesWidget))
#define ALM_FILES_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ALM_TYPE_FILES_WIDGET, AlmFilesWidgetClass))
#define ALM_IS_FILES_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ALM_TYPE_FILES_WIDGET))
#define ALM_IS_FILES_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ALM_TYPE_FILES_WIDGET))
#define ALM_FILES_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ALM_TYPE_FILES_WIDGET, AlmFilesWidgetClass))

typedef struct _AlmFilesWidget AlmFilesWidget;
typedef struct _AlmFilesWidgetClass AlmFilesWidgetClass;

#define ALM_TYPE_APPLICATIONS_WIDGET (alm_applications_widget_get_type ())
#define ALM_APPLICATIONS_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ALM_TYPE_APPLICATIONS_WIDGET, AlmApplicationsWidget))
#define ALM_APPLICATIONS_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ALM_TYPE_APPLICATIONS_WIDGET, AlmApplicationsWidgetClass))
#define ALM_IS_APPLICATIONS_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ALM_TYPE_APPLICATIONS_WIDGET))
#define ALM_IS_APPLICATIONS_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ALM_TYPE_APPLICATIONS_WIDGET))
#define ALM_APPLICATIONS_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ALM_TYPE_APPLICATIONS_WIDGET, AlmApplicationsWidgetClass))

typedef struct _AlmApplicationsWidget AlmApplicationsWidget;
typedef struct _AlmApplicationsWidgetClass AlmApplicationsWidgetClass;

#define ALM_TYPE_BLACKLIST (alm_blacklist_get_type ())
#define ALM_BLACKLIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ALM_TYPE_BLACKLIST, AlmBlacklist))
#define ALM_BLACKLIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ALM_TYPE_BLACKLIST, AlmBlacklistClass))
#define ALM_IS_BLACKLIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ALM_TYPE_BLACKLIST))
#define ALM_IS_BLACKLIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ALM_TYPE_BLACKLIST))
#define ALM_BLACKLIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ALM_TYPE_BLACKLIST, AlmBlacklistClass))

typedef struct _AlmBlacklist AlmBlacklist;
typedef struct _AlmBlacklistClass AlmBlacklistClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _alm_blacklist_unref0(var) ((var == NULL) ? NULL : (var = (alm_blacklist_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _AlmActivityLogManager {
	GtkBox parent_instance;
	AlmActivityLogManagerPrivate * priv;
};

struct _AlmActivityLogManagerClass {
	GtkBoxClass parent_class;
};

struct _AlmActivityLogManagerPrivate {
	GtkNotebook* notebook;
	AlmHistoryWidget* history_widget;
	AlmFilesWidget* files_widget;
	AlmApplicationsWidget* apps_widget;
	AlmBlacklist* blacklist;
	GtkSwitch* logging_switch;
};


static gpointer alm_activity_log_manager_parent_class = NULL;

GType alm_activity_log_manager_get_type (void) G_GNUC_CONST;
GType alm_history_widget_get_type (void) G_GNUC_CONST;
GType alm_files_widget_get_type (void) G_GNUC_CONST;
GType alm_applications_widget_get_type (void) G_GNUC_CONST;
gpointer alm_blacklist_ref (gpointer instance);
void alm_blacklist_unref (gpointer instance);
GParamSpec* alm_param_spec_blacklist (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void alm_value_set_blacklist (GValue* value, gpointer v_object);
void alm_value_take_blacklist (GValue* value, gpointer v_object);
gpointer alm_value_get_blacklist (const GValue* value);
GType alm_blacklist_get_type (void) G_GNUC_CONST;
#define ALM_ACTIVITY_LOG_MANAGER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), ALM_TYPE_ACTIVITY_LOG_MANAGER, AlmActivityLogManagerPrivate))
enum  {
	ALM_ACTIVITY_LOG_MANAGER_DUMMY_PROPERTY
};
AlmActivityLogManager* alm_activity_log_manager_new (void);
AlmActivityLogManager* alm_activity_log_manager_construct (GType object_type);
AlmBlacklist* alm_blacklist_new (void);
AlmBlacklist* alm_blacklist_construct (GType object_type);
AlmHistoryWidget* alm_history_widget_new (void);
AlmHistoryWidget* alm_history_widget_construct (GType object_type);
AlmFilesWidget* alm_files_widget_new (AlmBlacklist* blacklist_interface);
AlmFilesWidget* alm_files_widget_construct (GType object_type, AlmBlacklist* blacklist_interface);
AlmApplicationsWidget* alm_applications_widget_new (AlmBlacklist* blacklist_inter);
AlmApplicationsWidget* alm_applications_widget_construct (GType object_type, AlmBlacklist* blacklist_inter);
gboolean alm_blacklist_get_incognito (AlmBlacklist* self);
void alm_activity_log_manager_on_incognito_toggled (AlmActivityLogManager* self, gboolean status);
static void _alm_activity_log_manager_on_incognito_toggled_alm_blacklist_incognito_toggled (AlmBlacklist* _sender, gboolean status, gpointer self);
void alm_activity_log_manager_on_switch_activated (AlmActivityLogManager* self);
static void _alm_activity_log_manager_on_switch_activated_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
void alm_activity_log_manager_append_page (AlmActivityLogManager* self, GtkWidget* widget, const gchar* label);
void alm_blacklist_set_incognito (AlmBlacklist* self, gboolean status);
static void alm_activity_log_manager_finalize (GObject* obj);


static void _alm_activity_log_manager_on_incognito_toggled_alm_blacklist_incognito_toggled (AlmBlacklist* _sender, gboolean status, gpointer self) {
	alm_activity_log_manager_on_incognito_toggled (self, status);
}


static void _alm_activity_log_manager_on_switch_activated_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
	alm_activity_log_manager_on_switch_activated (self);
}


AlmActivityLogManager* alm_activity_log_manager_construct (GType object_type) {
	AlmActivityLogManager * self = NULL;
	AlmBlacklist* _tmp0_;
	GtkNotebook* _tmp1_;
	GtkNotebook* _tmp2_;
	GtkNotebook* _tmp3_;
	AlmHistoryWidget* _tmp4_;
	AlmHistoryWidget* _tmp5_;
	const gchar* _tmp6_ = NULL;
	GtkLabel* _tmp7_;
	GtkLabel* _tmp8_;
	GtkLabel* history_label;
	GtkNotebook* _tmp9_;
	AlmHistoryWidget* _tmp10_;
	AlmBlacklist* _tmp11_;
	AlmFilesWidget* _tmp12_;
	AlmFilesWidget* _tmp13_;
	const gchar* _tmp14_ = NULL;
	GtkLabel* _tmp15_;
	GtkLabel* _tmp16_;
	GtkLabel* files_label;
	GtkNotebook* _tmp17_;
	AlmFilesWidget* _tmp18_;
	AlmBlacklist* _tmp19_;
	AlmApplicationsWidget* _tmp20_;
	AlmApplicationsWidget* _tmp21_;
	const gchar* _tmp22_ = NULL;
	GtkLabel* _tmp23_;
	GtkLabel* _tmp24_;
	GtkLabel* app_label;
	GtkNotebook* _tmp25_;
	AlmApplicationsWidget* _tmp26_;
	GtkBox* _tmp27_;
	GtkBox* _tmp28_;
	GtkBox* logging_box;
	GtkLabel* _tmp29_;
	GtkLabel* _tmp30_;
	GtkLabel* logging_label;
	const gchar* _tmp31_ = NULL;
	gchar* _tmp32_ = NULL;
	gchar* _tmp33_;
	GtkSwitch* _tmp34_;
	GtkSwitch* _tmp35_;
	GtkSwitch* _tmp36_;
	GtkSwitch* _tmp37_;
	AlmBlacklist* _tmp38_;
	gboolean _tmp39_ = FALSE;
	AlmBlacklist* _tmp40_;
	GtkSwitch* _tmp41_;
	self = (AlmActivityLogManager*) g_object_new (object_type, "orientation", GTK_ORIENTATION_VERTICAL, NULL);
	gtk_widget_set_size_request ((GtkWidget*) self, 600, 450);
	gtk_box_set_spacing ((GtkBox*) self, 6);
	g_object_set ((GtkWidget*) self, "margin", 12, NULL);
	_tmp0_ = alm_blacklist_new ();
	_alm_blacklist_unref0 (self->priv->blacklist);
	self->priv->blacklist = _tmp0_;
	_tmp1_ = (GtkNotebook*) gtk_notebook_new ();
	_tmp2_ = g_object_ref_sink (_tmp1_);
	_g_object_unref0 (self->priv->notebook);
	self->priv->notebook = _tmp2_;
	_tmp3_ = self->priv->notebook;
	gtk_box_pack_start ((GtkBox*) self, (GtkWidget*) _tmp3_, TRUE, TRUE, (guint) 0);
	_tmp4_ = alm_history_widget_new ();
	_tmp5_ = g_object_ref_sink (_tmp4_);
	_g_object_unref0 (self->priv->history_widget);
	self->priv->history_widget = _tmp5_;
	_tmp6_ = _ ("Recent Items");
	_tmp7_ = (GtkLabel*) gtk_label_new (_tmp6_);
	_tmp8_ = g_object_ref_sink (_tmp7_);
	history_label = _tmp8_;
	_tmp9_ = self->priv->notebook;
	_tmp10_ = self->priv->history_widget;
	gtk_notebook_append_page (_tmp9_, (GtkWidget*) _tmp10_, (GtkWidget*) history_label);
	_tmp11_ = self->priv->blacklist;
	_tmp12_ = alm_files_widget_new (_tmp11_);
	_tmp13_ = g_object_ref_sink (_tmp12_);
	_g_object_unref0 (self->priv->files_widget);
	self->priv->files_widget = _tmp13_;
	_tmp14_ = _ ("Files");
	_tmp15_ = (GtkLabel*) gtk_label_new (_tmp14_);
	_tmp16_ = g_object_ref_sink (_tmp15_);
	files_label = _tmp16_;
	_tmp17_ = self->priv->notebook;
	_tmp18_ = self->priv->files_widget;
	gtk_notebook_append_page (_tmp17_, (GtkWidget*) _tmp18_, (GtkWidget*) files_label);
	_tmp19_ = self->priv->blacklist;
	_tmp20_ = alm_applications_widget_new (_tmp19_);
	_tmp21_ = g_object_ref_sink (_tmp20_);
	_g_object_unref0 (self->priv->apps_widget);
	self->priv->apps_widget = _tmp21_;
	_tmp22_ = _ ("Applications");
	_tmp23_ = (GtkLabel*) gtk_label_new (_tmp22_);
	_tmp24_ = g_object_ref_sink (_tmp23_);
	app_label = _tmp24_;
	_tmp25_ = self->priv->notebook;
	_tmp26_ = self->priv->apps_widget;
	gtk_notebook_append_page (_tmp25_, (GtkWidget*) _tmp26_, (GtkWidget*) app_label);
	_tmp27_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 6);
	_tmp28_ = g_object_ref_sink (_tmp27_);
	logging_box = _tmp28_;
	gtk_widget_set_margin_right ((GtkWidget*) logging_box, 12);
	_tmp29_ = (GtkLabel*) gtk_label_new (NULL);
	_tmp30_ = g_object_ref_sink (_tmp29_);
	logging_label = _tmp30_;
	_tmp31_ = _ ("Record Activity");
	_tmp32_ = g_strdup_printf ("<b>%s</b>", _tmp31_);
	_tmp33_ = _tmp32_;
	gtk_label_set_markup (logging_label, _tmp33_);
	_g_free0 (_tmp33_);
	_tmp34_ = (GtkSwitch*) gtk_switch_new ();
	_tmp35_ = g_object_ref_sink (_tmp34_);
	_g_object_unref0 (self->priv->logging_switch);
	self->priv->logging_switch = _tmp35_;
	_tmp36_ = self->priv->logging_switch;
	gtk_box_pack_end (logging_box, (GtkWidget*) _tmp36_, FALSE, FALSE, (guint) 0);
	gtk_box_pack_end (logging_box, (GtkWidget*) logging_label, FALSE, FALSE, (guint) 0);
	_tmp37_ = self->priv->logging_switch;
	_tmp38_ = self->priv->blacklist;
	_tmp39_ = alm_blacklist_get_incognito (_tmp38_);
	gtk_switch_set_active (_tmp37_, !_tmp39_);
	_tmp40_ = self->priv->blacklist;
	g_signal_connect_object (_tmp40_, "incognito-toggled", (GCallback) _alm_activity_log_manager_on_incognito_toggled_alm_blacklist_incognito_toggled, self, 0);
	_tmp41_ = self->priv->logging_switch;
	g_signal_connect_object ((GObject*) _tmp41_, "notify::active", (GCallback) _alm_activity_log_manager_on_switch_activated_g_object_notify, self, 0);
	gtk_box_pack_start ((GtkBox*) self, (GtkWidget*) logging_box, FALSE, FALSE, (guint) 9);
	gtk_widget_show_all ((GtkWidget*) self);
	_g_object_unref0 (logging_label);
	_g_object_unref0 (logging_box);
	_g_object_unref0 (app_label);
	_g_object_unref0 (files_label);
	_g_object_unref0 (history_label);
	return self;
}


AlmActivityLogManager* alm_activity_log_manager_new (void) {
	return alm_activity_log_manager_construct (ALM_TYPE_ACTIVITY_LOG_MANAGER);
}


void alm_activity_log_manager_append_page (AlmActivityLogManager* self, GtkWidget* widget, const gchar* label) {
	const gchar* _tmp0_;
	const gchar* _tmp1_ = NULL;
	GtkLabel* _tmp2_;
	GtkLabel* _tmp3_;
	GtkLabel* app_label;
	GtkNotebook* _tmp4_;
	GtkWidget* _tmp5_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (widget != NULL);
	g_return_if_fail (label != NULL);
	_tmp0_ = label;
	_tmp1_ = _ (_tmp0_);
	_tmp2_ = (GtkLabel*) gtk_label_new (_tmp1_);
	_tmp3_ = g_object_ref_sink (_tmp2_);
	app_label = _tmp3_;
	_tmp4_ = self->priv->notebook;
	_tmp5_ = widget;
	gtk_notebook_append_page (_tmp4_, _tmp5_, (GtkWidget*) app_label);
	_g_object_unref0 (app_label);
}


void alm_activity_log_manager_on_incognito_toggled (AlmActivityLogManager* self, gboolean status) {
	GtkSwitch* _tmp0_;
	gboolean _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->logging_switch;
	_tmp1_ = status;
	gtk_switch_set_active (_tmp0_, !_tmp1_);
}


void alm_activity_log_manager_on_switch_activated (AlmActivityLogManager* self) {
	AlmBlacklist* _tmp0_;
	gboolean _tmp1_ = FALSE;
	gboolean recording;
	GtkSwitch* _tmp2_;
	gboolean _tmp3_ = FALSE;
	gboolean _tmp4_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->blacklist;
	_tmp1_ = alm_blacklist_get_incognito (_tmp0_);
	recording = !_tmp1_;
	_tmp2_ = self->priv->logging_switch;
	_tmp3_ = gtk_switch_get_active (_tmp2_);
	_tmp4_ = recording;
	if (_tmp3_ != _tmp4_) {
		AlmBlacklist* _tmp5_;
		gboolean _tmp6_;
		_tmp5_ = self->priv->blacklist;
		_tmp6_ = recording;
		alm_blacklist_set_incognito (_tmp5_, _tmp6_);
	}
}


static void alm_activity_log_manager_class_init (AlmActivityLogManagerClass * klass) {
	alm_activity_log_manager_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (AlmActivityLogManagerPrivate));
	G_OBJECT_CLASS (klass)->finalize = alm_activity_log_manager_finalize;
}


static void alm_activity_log_manager_instance_init (AlmActivityLogManager * self) {
	self->priv = ALM_ACTIVITY_LOG_MANAGER_GET_PRIVATE (self);
}


static void alm_activity_log_manager_finalize (GObject* obj) {
	AlmActivityLogManager * self;
	self = ALM_ACTIVITY_LOG_MANAGER (obj);
	_g_object_unref0 (self->priv->notebook);
	_g_object_unref0 (self->priv->history_widget);
	_g_object_unref0 (self->priv->files_widget);
	_g_object_unref0 (self->priv->apps_widget);
	_alm_blacklist_unref0 (self->priv->blacklist);
	_g_object_unref0 (self->priv->logging_switch);
	G_OBJECT_CLASS (alm_activity_log_manager_parent_class)->finalize (obj);
}


GType alm_activity_log_manager_get_type (void) {
	static volatile gsize alm_activity_log_manager_type_id__volatile = 0;
	if (g_once_init_enter (&alm_activity_log_manager_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AlmActivityLogManagerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) alm_activity_log_manager_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AlmActivityLogManager), 0, (GInstanceInitFunc) alm_activity_log_manager_instance_init, NULL };
		GType alm_activity_log_manager_type_id;
		alm_activity_log_manager_type_id = g_type_register_static (GTK_TYPE_BOX, "AlmActivityLogManager", &g_define_type_info, 0);
		g_once_init_leave (&alm_activity_log_manager_type_id__volatile, alm_activity_log_manager_type_id);
	}
	return alm_activity_log_manager_type_id__volatile;
}



