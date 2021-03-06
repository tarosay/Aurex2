/*
 * revrsemgr.cpp - Reverse region manager module
 *
 * $Id: reversemgr.cpp,v 1.3 2004/02/20 17:56:18 fumi Exp $
 *
 * Copyright (C) 2004 Fumihiko MACHIDA <machida@users.sourceforge.jp>
 * All rights reserved.
 *
 * This is free software with ABSOLUTELY NO WARRANTY.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA
 */

#include "reverse.h"
#include "reversemgr.h"

/** リバースの追加
 * @param x1 座標（左上の X）
 * @param y1 座標（左上の Y）
 * @param x2 座標（左下の X）
 * @param y2 座標（左下の Y）
 * @retval 0xffff 失敗
 * @retval 上記以外 成功。戻り値はリージョン番号
 */
int ReverseMgr::add(int x1, int y1, int x2, int y2)
{
	return LcdBlRvMgr::add(new Reverse(x1, y1, x2, y2));
}

