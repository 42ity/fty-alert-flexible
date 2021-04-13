/*  =========================================================================
    fty_alert_flexible_audit_log - Manage audit log

    Copyright (C) 2014 - 2021 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

/*
@header
    fty_alert_flexible_audit_log - Manage alerts audit log
@discuss
@end
*/

#include "fty_alert_flexible_classes.h"

Ftylog *AlertsFlexibleAuditLogManager::_alertsauditlog = nullptr;

//  init audit logger
void AlertsFlexibleAuditLogManager::init (const char* configLogFile)
{
    if (!_alertsauditlog)
    {
        _alertsauditlog = ftylog_new ("alerts-flexible-audit", configLogFile);
    }
}

//  deinit audit logger
void AlertsFlexibleAuditLogManager::deinit ()
{
    if (_alertsauditlog)
    {
        ftylog_delete(_alertsauditlog);
        _alertsauditlog = nullptr;
    }
}

//  return alerts audit logger
Ftylog* AlertsFlexibleAuditLogManager::getInstance ()
{
    return _alertsauditlog;
}
