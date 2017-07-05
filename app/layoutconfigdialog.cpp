/*
 * Copyright 2017  Smith AR <audoban@openmailbox.org>
 *                 Michail Vourlakos <mvourlakos@gmail.com>
 *
 * This file is part of Latte-Dock
 *
 * Latte-Dock is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * Latte-Dock is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "ui_layoutconfigdialog.h"
#include "layoutconfigdialog.h"

Latte::LayoutConfigDialog::LayoutConfigDialog(QWidget* parent)
: QDialog(parent), ui(new Ui::LayoutConfigDialog)
{
    ui->setupUi(this);
    //QMetaObject::connectSlotsByName(this);
}

Latte::LayoutConfigDialog::~LayoutConfigDialog()
{
    qDebug() << Q_FUNC_INFO;
}

void Latte::LayoutConfigDialog::on_copyButton_clicked()
{
    qDebug() << Q_FUNC_INFO;
}

void Latte::LayoutConfigDialog::on_removeButton_clicked()
{
    qDebug() << Q_FUNC_INFO;
}

void Latte::LayoutConfigDialog::on_importButton_clicked()
{
    qDebug() << Q_FUNC_INFO;
}

void Latte::LayoutConfigDialog::on_exportButton_clicked()
{
    qDebug() << Q_FUNC_INFO;
}

void Latte::LayoutConfigDialog::on_okButton_clicked()
{
    qDebug() << Q_FUNC_INFO;
}

void Latte::LayoutConfigDialog::on_applyButton_cliked()
{
    qDebug() << Q_FUNC_INFO;
}

void Latte::LayoutConfigDialog::on_cancelButton_clicked()
{
    qDebug() << Q_FUNC_INFO;
}

void Latte::LayoutConfigDialog::on_resetButton_clicked()
{
    qDebug() << Q_FUNC_INFO;
}


