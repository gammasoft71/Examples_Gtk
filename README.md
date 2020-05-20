# Gtk+3 Examples

Shows how to use Gtk3 controls only by programming code (c++17).

## Hello World

["Hello World"](src/HelloWorld/HelloWorld) The classic first application HelloWorld with GtkLabel.

## Application

[Application](src/Application/Application) Shows how to create a simple gtk application with GtkApplication.

## Common Controls

[Button](src/CommonControls/Button) Shows how to create a gtk Button and Event Click with GtkButton.

[CheckBox](src/CommonControls/CheckBox) Shows how to create a gtk CheckBox with GtkCheckBox.

[CheckedListBox](src/CommonControls/CheckedListBox) Shows how to create a gtk CheckListBox with GtkCheckListButton.

[ComboBox](src/CommonControls/ComboBox) Shows how to create a gtk ComboBox with GtkComboBox.

[Control](src/CommonControls/Control) Shows how to create a gtk Control with GTkControl.

[DateTimePicker](src/CommonControls/DateTimePicker) Shows how to create a gtk DateTimePicker with GtkDatePicker.

[DomainUpDown](src/CommonControls/DomainUpDown) Shows how to create a gtk DomainUpDown with own [GtkDomainSpinCtrl](src/CommonControls/DomainUpDown/GTkDomainSpinCtrl.h) (GtkPanel with GtkTextCtrl and GtkSpinButton).

[HScrollBar](src/CommonControls/HScrollBar) Shows how to create a gtk HScrollBar with GtkScrollBar.

[Label](src/CommonControls/Label) Shows how to create a gtk Label with GtkStaticText.

[LinkLabel](src/CommonControls/LinkLabel) Shows how to create a gtk LinkLabel with GtkHyperLinkCtrl.

[ListBox](src/CommonControls/ListBox) Shows how to create a gtk ListBox with GtkListBox.

[ListView](src/CommonControls/ListView) Shows how to create a gtk ListView with GtkListCtrl.

[MonthCalendar](src/CommonControls/MonthCalendar) Shows how to create a gtk MonthCalendar with GtkCalendarCtrl.

[NotifyIcon](src/CommonControls/NotifyIcon) Shows how to create a gtk NotifyIcon with own [wxNotifyIcon](src/CommonControls/NotifyIcon/wxNotifyIcon.h) (wxTaskBarIcon).

[NumericUpDown](src/CommonControls/NumericUpDown) Shows how to create a gtk NumericUpDown with GtkSpinCtrl and GtkSpinCtrlDouble.

[PictureBox](src/CommonControls/PictureBox) Shows how to create a gtk CheckBox with GtkStaticBitmap.

[ProgressBar](src/CommonControls/ProgressBar) Shows how to create a gtk ProgressBar with GtkGauge.

[RadioButton](src/CommonControls/RadioButton) Shows how to create a gtk RadioButton with GtkRadioButton.

[RichTextBox](src/CommonControls/RichTextBox) Shows how to create a gtk RichTextBox with GtkRichTextCtrl.

[TextBox](src/CommonControls/TextBox) Shows how to create a gtk TextBox with GtkTextCtrl.

[ToolTip](src/CommonControls/ToolTip) Shows how to create a gtk ToolTip with GtkRichToolTip.

[TrackBar](src/CommonControls/TrackBar) Shows how to create a gtk TrackBar with GtkSlider.

[TreeView](src/CommonControls/TreeView) Shows how to create a gtk TreeView with GtkTreeCtrl.

[VScrollBar](src/CommonControls/VScrollBar) Shows how to create a gtk VScrollBar with GtkScrollBar.

[WebBrowser](src/CommonControls/WebBrowser) Shows how to create a gtk WebBrowser with GtkWebView.

## Containers

[Form](src/Containers/Form) Shows how to create a simple gtk Form with GtkFrame.

[GroupBox](src/Containers/GroupBox) Shows how to create a simple gtk GroupBox with GtkStaticBox.

[Panel](src/Containers/Panel) Shows how to create a simple gtk Panel with GtkPanel.

[SplitContainer](src/Containers/SplitContainer) Shows how to create a simple gtk SplitContainer with GtkSplitterWindow and GtkPanel.

[TabControl](src/Containers/TabControl) Shows how to create a simple gtk TabControl with TabPages with GtkNotebook.

## Menus and toolbars

[MainMenu](src/MenusAndToolbars/MainMenu) Shows how to create a gtk MainMenu with GtkMenu.

## Components

[Timer](src/Components/Timer) Shows how to create a simple gtk Timer with GtkTimer.

## Dialogs

[ColorDialog](src/Dialogs/ColorDialog) Shows how to create a ColorDialog with GtkColourDialog.

[FolderBrowserDialog](src/Dialogs/FolderBrowserDialog) Shows how to create a FolderBrowserDialog with GtkDirDialog.

[FontDialog](src/Dialogs/FontDialog) Shows how to create a FontDialog with GtkFontDialog.

[MessageBox](src/Dialogs/MessageBox) Shows how to create a MessageBox with GtkMessageBox.

## Events

[ApplicationIdle](src/Application/ApplicationIdle) Shows how to create an application and catch idle event.

[FormAndEvents](src/Events/FormAndEvents) Shows how to create a form and catch events.

[FormClick](src/Events/FormClick) Shows how to create a form and catch click event.

[FormPaint](src/Others/FormPaint) Shows how to create a form and catch paint event.

## Custom controls

[NumericTextBox](src/CustomControls/NumericTextBox) Shows how to create a custom control GtkNumericTextCtrl from GtkTextCtrl.

[Line](src/Others/Line) Shows how to create a custom control GtkLine from GtkPanel.

## Others

[ColoredForms](src/Others/ColoredForms) Shows how to create colored background forms.

[ColoredTabPages](src/Others/ColoredTabPages) Shows how to create colored background tab pages.

[Cursors](src/Others/Cursors) Shows how to assign specified cursor to control.

[FormIcon](src/Others/FormIcon) Shows how to assign an icon to form.

[GroupBoxAndCheckBox](src/Others/GroupBoxAndCheckBox) Shows how to use GroupBox and CheckBoxes.

[GroupBoxAndRadioButton](src/Others/GroupBoxAndRadioButton) Shows how to use GroupBox and RadioButtons.

[MdiForm](src/Others/MdiForm) Shows how to create a MDI (Multiple Document Interface) form.

## Download

``` shell
git clone https://github.com/gammasoft71/Examples.Gtk Examples.Gtk
```

## Generate and build

To build this project, open "Terminal" and type following lines:

### Linux :

``` cmake
mkdir build
cd build
cmake .. 
cmake --build . --config Debug
```

## Remarks

This project run with [Gtk3](https://developer.gnome.org/gtk3/stable) and [CMake](https://cmake.org).
