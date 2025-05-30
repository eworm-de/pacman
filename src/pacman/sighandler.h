/*
 *  sighandler.h
 *
 *  Copyright (c) 2015-2025 Pacman Development Team <pacman-dev@lists.archlinux.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PM_SIGHANDLER_H
#define PM_SIGHANDLER_H

void install_segv_handler(void);
void install_winch_handler(void);
void install_soft_interrupt_handler(void);
void remove_soft_interrupt_handler(void);

#endif /* PM_SIGHANDLER_H */
