/*
 * This is a part of the BugTrap package.
 * Copyright (c) 2005-2009 IntelleSoft.
 * All rights reserved.
 *
 * Description: Wait cursor.
 * Author: Maksim Pyatkovskiy.
 */

#include "StdAfx.h"
#include "WaitCursor.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

/**
 * @addtogroup BugTrapUI BugTrap Graphical User Interface
 * @{
 */

void CWaitCursor::EndWait(void)
{
	if (m_hOldCursor)
	{
		SetCursor(m_hOldCursor);
		m_hOldCursor = NULL;
	}
}

/** @} */