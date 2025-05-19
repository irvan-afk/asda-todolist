#include "../raylib/include/raygui.h"

#include "../include/utils/menu.h"
#include "../include/linkedlist.h"
#include "../include/tree.h"
#include <stdbool.h>

// Add Tugas

bool drawAddTugas(Rectangle bounds, const char* niche) {
    bool clicked = false;
    GuiButton(bounds, niche);
    if (clicked){
        // Open a modal to add a task
        Rectangle modalBounds = { bounds.x, bounds.y + 50, bounds.width, bounds.height };
        GuiTextBox(modalBounds, "Enter task name", 64, false);
        if (GuiButton((Rectangle){ modalBounds.x, modalBounds.y + 30, modalBounds.width, modalBounds.height }, "Add Task")) {
            // Add the task to the tree
            TreeNode* newTask = (TreeNode*)malloc(sizeof(TreeNode));
            newTask->data.dirName = strdup("New Task");
            newTask->data.task = (LinkedList*)malloc(sizeof(LinkedList));
            initList(newTask->data.task);
            insertBack(newTask->data.task, "New Task");
            newTask->firstSon = NULL;
            newTask->nextBrother = NULL;
        }
    }

    return clicked;
}

void drawMenu() {
    Rectangle boundsBtn = {40, 100, 200, 40};
    drawAddTugas(boundsBtn, "Add Task");
}